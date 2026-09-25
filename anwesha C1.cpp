//write a C program display odd numbers from 1 to n
#include <stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number:");
	scanf("%d",n);
	printf("odd numbers from 1 to %d\n",n);
	while(i<=n)
	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
