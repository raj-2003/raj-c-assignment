#include<stdio.h>

main()
{
	int i,j,a,n,number[10];
	
	printf("Enter the value of N \n");
	scanf("%d",&n);
	
	printf("Enter the number : ");
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
		
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	
	printf("the numbers arranged in ascending order \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",number[i]);
	}
		
}
