//write a c program to check whether a number is perfect or not.
#include <stdio.h>
int main ()
{
	int n,i,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	for (i=1; i<n;i++)
	{
		if (n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n>0 && sum ==n)
	printf("Perfect Number");
	else
	printf("Not Perfect Number");
	return 0;
}
