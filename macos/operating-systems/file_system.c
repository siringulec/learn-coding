#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define total_num_blocks 64
#define total_num_inodes 8
#define max_block_per_file 8
#define max_file_name_length 20

struct inode{
	int used;
	int num_blocks_used;
	int file_blocks[max_block_per_file];
	char fname[max_file_name_length];
};

int free_blocks[total_num_blocks];
struct inode inode_list[total_num_inodes];
void new_file();
void print_lists();
void show_file();
void delete_file();
void add_block();
void remove_block();


int main()
{
  int i, n, loop=1;
  
  //initialize free block list 0: free, 1: not free
  for(i=0; i<total_num_blocks; i++)
	  free_blocks[i]=0;
  
  //initialize the inodes
  for(i=0; i<total_num_inodes; i++){
	  inode_list[i].used=0;
	  inode_list[i].num_blocks_used=0;
  }

  while(loop){
	  printf("\n\nEnter operation code:\n1: new file\n2: delete file\n3: add block\n4: remove block\n5: show files\n6: print\n7: exit\n\n");
	  scanf("%d", &n);
	  switch(n){
			case 1: new_file();
				break;
			case 2: delete_file();
				break;
			case 3: add_block();
				break;
			case 4: remove_block();
				break;
	    case 5: show_file();
				break;
			case 6: print_lists();
				break;
			case 7: loop=0;
				break;
	  }// end of switch case
  }// end of while
	return 0;
}// end of main

void new_file()
{
	int i, j, k, n;
	for(i=0; i<total_num_inodes; i++)
		if(inode_list[i].used==0)
			break;
	if(i==total_num_inodes)
	{
		printf("No free inode. Cannot crreate new file");
	}
	else
	{
		inode_list[i].used=1;
		printf("Enter file name:\n");
		scanf("%s", inode_list[i].fname);
		printf("Enter the required number of blocks\n");
		scanf("%d", &n);
		k=0;
		for(j=0; j<n; j++)
		{
			for(; k<total_num_blocks; k++)
				if(free_blocks[k]==0)
				{
					free_blocks[k]=1;
					inode_list[i].file_blocks[inode_list[i].num_blocks_used]=k;
					inode_list[i].num_blocks_used++;
					break;
				}
			if(j<n && k==total_num_blocks)
				printf("Disk full. No more block can be added.\n");
		}
	}
	
}

void show_file()
{
	int i;
	printf("File names: \n");
	for(i=0; i<total_num_inodes; i++)
		if(inode_list[i].used==1)
			printf("%s \n", inode_list[i].fname);	
	
}

void print_lists()
{
	int i, j;
	printf("Used blocks: ");
	for(i=0; i<total_num_inodes; i++)
		if(inode_list[i].used==1)
			for(j=0; j<inode_list[i].num_blocks_used; j++)
				printf("%d ,", inode_list[i].file_blocks[j]);
	
	printf("\nFree blocks: ");
	for(i=0; i<total_num_blocks; i++)
		if(free_blocks[i]==0)
			printf("%d ,", i);	
}

void delete_file()
{
  char filename[max_file_name_length];
  printf("Enter file name to delete:\n");
  scanf("%s", filename);

  int i, j;
  for(i = 0; i < total_num_inodes; i++)
  {
    if(inode_list[i].used == 1 && strcmp(inode_list[i].fname, filename) == 0)
    {
      inode_list[i].used = 0;
      for(j = 0; j < inode_list[i].num_blocks_used; j++)
      {
        int block_index = inode_list[i].file_blocks[j];
        free_blocks[block_index] = 0;
      }
      inode_list[i].num_blocks_used = 0;
      printf("File %s deleted.\n", filename);
      return;
    }
  }
  printf("File %s not found.\n", filename);
}

void add_block()
{
  char filename[max_file_name_length];
  printf("Enter file name to add block to:\n");
  scanf("%s", filename);

  int i, j, k;
  for(i = 0; i < total_num_inodes; i++)
  {
    if(inode_list[i].used == 1 && strcmp(inode_list[i].fname, filename) == 0)
    {
      if(inode_list[i].num_blocks_used == max_block_per_file)
      {
        printf("File %s already has the maximum number of blocks.\n", filename);
        return;
      }
      for(k = 0; k < total_num_blocks; k++)
      {
        if(free_blocks[k] == 0)
        {
          free_blocks[k] = 1;
          inode_list[i].file_blocks[inode_list[i].num_blocks_used] = k;
          inode_list[i].num_blocks_used++;
          printf("Block %d added to file %s.\n", k, filename);
          return;
        }
      }
      printf("Disk full. No more block can be added.\n");
      return;
    }
  }
  printf("File %s not found.\n", filename);
}

void remove_block()
{
  char filename[max_file_name_length];
  printf("Enter file name:\n");
  scanf("%s", filename);

  int i, j;
  for(i = 0; i < total_num_inodes; i++)
  {
    if(inode_list[i].used == 1 && strcmp(inode_list[i].fname, filename) == 0)
    {
      if(inode_list[i].num_blocks_used == 0)
      {
        printf("File %s has no blocks to remove.\n", filename);
        return;
      }
      int block_index = inode_list[i].file_blocks[inode_list[i].num_blocks_used - 1];
      free_blocks[block_index] = 0;
      inode_list[i].num_blocks_used--;
      printf("Block %d removed from file %s.\n", block_index, filename);
      return;
    }
  }
}
