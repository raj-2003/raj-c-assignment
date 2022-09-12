#include<stdio.h>

int main()
{
	int x,y,*p,*q,sum;
	
	printf("Enter two number : ");
	scanf("%d%d",&x,&y);
	
	p=&x;
	q=&y;
	
	sum = *p + *q;
	
	printf("\nsum of the number = %d",sum);
}
