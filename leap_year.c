#include <stdio.h>

int main()
{
	int n, isLeap;	
	
	printf("Enter year:");
	scanf("%d", &n);
	
	if(n % 4 != 0)
	{
		isLeap = 0;
	} 
	
	else if(n % 100 != 0)
	{
		isLeap = 1;
	}
	
	else if(n % 400 != 0)
	{
		isLeap = 0;
	}
	else
	{
		isLeap = 1;
	}
	
	if(isLeap == 1)
	{
		printf("%d is a leap year.\n",n);
	}
	else
	{
		printf("%d is a common year.\n",n);
	}
	
	return 0;
}