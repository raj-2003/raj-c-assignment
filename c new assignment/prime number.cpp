#include<stdio.h>

int main()
{
	int n;
	printf("Enter number to check to prime : ");
	scanf("%d",&n);
	
	
	if(n%2==0)
	{
		printf("number is prime ");
	}
	else
	{
		printf("number is not prime ");
	}
}
