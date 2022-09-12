#include<stdio.h>
#include<string.h>

main()
{
	char s1[20];
	char s2[20];
	
	printf("Enter the first string : ");
	scanf("%s",s1);
	
	printf("Enter the second string : ");
	scanf("%s",s2);
	
    printf("%s",strcat(s1,s2)); 

}
