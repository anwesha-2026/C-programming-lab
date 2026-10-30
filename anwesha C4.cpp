//write a c program to check whether a number is prime or not using for loop//
#include <stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
		i++;
	}
	if (n>1 && count==0)
	printf("prime number");
	else
	printf("not prime number");
	return 0;
}
