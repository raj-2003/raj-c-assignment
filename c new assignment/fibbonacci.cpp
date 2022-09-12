#include<stdio.h>

main()
{
	int i,n1=0,n2=1,term,nth;
	
	printf("How many terms you  want in series : ");
	scanf("%d",&term);
	
	if(term<=0) 
	{
		printf("enter valid input!!!");
	}
	else if(term==1)
	{
		printf("%d",n1);
	}
	else
	{
		printf("\n\n---------Fibbonacci series----------\n\n");
		for(i=1;i<=term;i++)
		{
			printf("%d\t",n1);
			nth=n1+n2;
			n1=n2;
			n2=nth;
		}
	}
}
