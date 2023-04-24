#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   FILE *fp1 = fopen(argv[1], "r");
   FILE *fp2 = fopen(argv[2], "r");
   FILE *fp3 = fopen(argv[3], "w+");
   char c;
   int count_line = 0, count_char = 0;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
      puts("Could not open files");
      exit(0);
   }
   while ((c = fgetc(fp1)) != EOF){
      fputc(c, fp3);
      if (c == '\n'){
         count_line+=1;
      }
      else
         count_char+=1;
   }
   while ((c = fgetc(fp2)) != EOF){
      fputc(c, fp3);
      if (c == '\n'){
         count_line+=1;
      }
      else
         count_char+=1;
   }

   printf("Number of lines in the merge file: %d\n", count_line);
   printf("Number of charecters in the merge file: %d\n", count_char);
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
