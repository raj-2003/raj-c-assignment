#include<stdio.h>
main()
{
	int i,fact=1,num;
	
	printf("Enter number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is : %d",num,fact);
}
