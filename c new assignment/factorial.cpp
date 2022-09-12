#include<stdio.h>
int fact(int n);
main()
{
	int x;
	printf("enter number : ");
	scanf("%d",&x);
	
	printf("Factoial of %d is : %d",x,fact(x));
}

int fact(int n)
{
	if(n<=1)
	    return 1;
	    
	return n*fact(n-1);
}
