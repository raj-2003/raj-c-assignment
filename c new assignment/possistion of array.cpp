#include<stdio.h>

main()
{
	int num,i,r,array[30];
	
	printf("Enter the number of elements in the array : ");
	scanf("%d",&num);
	
	printf("Enter the array elements : ");
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the number to be searched : ");
	scanf("%d",&r);
	
	i=0;
	while(i < num && r!=array[i])
	{
		i++;		
	}
	
	if(i < num)
	{
		printf("The element is found in the possition = %d",i + 1);

	}
	else
	{
		printf("Element not found! ");
	}
	
}
