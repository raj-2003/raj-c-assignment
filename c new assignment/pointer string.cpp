#include<stdio.h>
main()
{
	char string1[20];
	char string2[20];
	
	int i=0,j=0;
	
	char*str1;
	char*str2;
	
	str1=string1;
	str2=string2;
	
	printf("Enter the first string : ");
	scanf("%s",string1);
	
	printf("Enter the second string : ");
	scanf("%s",string2);
	
	printf("The concatenated string is %s",string1);
}
