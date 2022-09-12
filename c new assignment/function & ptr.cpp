#include<stdio.h>
#include<stdlib.h>

main()
{
	int n,i,j,temp;
	int *p;
	
	printf("how many elements you want ?");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	free(p);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)<*(p+j))
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	
	printf("the sorted number : \n");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
}

