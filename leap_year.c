#include <stdio.h>

int main()
{
	int n;	
	
	printf("Enter year:");
	scanf("%d", &n);
	
	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
	{
		printf("%d is a leap year.\n",n);
	}
	else
	{
		printf("%d is a common year.\n",n);
	}
	return 0;
}