#include<stdio.h>

main()
{
	int percentage;
	printf("Enter marks : ");
	scanf("%d",&percentage);
	
	if(percentage>75)
	{
		printf("Distincation");
	}
	else if(percentage>60 && percentage<=75)
	{
		printf("First class");
	}
	
	else if(percentage>50 && percentage<=60)
	{
		printf("second class");
	}
	
	else if(percentage>35 && percentage<=50)
	{
		printf("pass class");
	}
	else
	{
		printf("Fail");
	}
}
