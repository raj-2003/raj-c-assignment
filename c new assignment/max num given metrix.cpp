#include<stdio.h>

main()
{
	int i,n;
	float arr[100];
	printf("Enter the number of element (1 to 100):");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number %d :",i+1);
		scanf("%f",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(arr[0] < arr[i])
		   arr[0] = arr[i];
	}
	
	printf("largest element =%.2f",arr[0]);
}
