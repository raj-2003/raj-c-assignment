#include<stdio.h>

int main()
{
	int arr[100];
	int n,i,j,temp;
	
	printf("sort element of array : ");
	
	printf("the size of array : ");
	scanf("%d",&n);
	
	printf("%d elements in the array : ",n);
	for(i=0;i<n;i++)
	{
		printf(" %d : ",i);
		scanf("%d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\nelements of array in sorted : ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
