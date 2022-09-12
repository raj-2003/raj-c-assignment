#include<stdio.h>
main()
{
	int i,largest;
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	
	largest = arr[0];
	
	for(i=0;i<10;i++)
	{
		if(largest<arr[i])
		{
			largest=arr[i];
		}
	}
	printf("largest element of the array is : %d",largest);
}
