//write a c program to check whether a number is prime or not first using while loop then second using for loop//
#include <stdio.h>
int main()
{
	int n,i=2,count=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<n)
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
