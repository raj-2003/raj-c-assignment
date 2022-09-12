#include<stdio.h>
int main()
{
	int a,b;
    printf("enter year : ");
    scanf("%d",&a);
    (a%4==0)?printf("leap year"):printf("not a leap year");
}
