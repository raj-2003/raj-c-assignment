#include<stdio.h>
int main()
{
	int i,j;
	int n=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
	return 0;
}
