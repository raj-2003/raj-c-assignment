#include<stdio.h>
main()
{
	int choice,r,l,w,h,b;
	
	float area;
	
	printf("area of circle\n");
	printf("area of rectangle\n");
	printf("area of triangle\n");
	printf("your choice : ");
	
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("radious of the circle : ");
			scanf("%d",&r);
			area=3.14*r*r;
			break;
			
		case 2:
			printf("length and width of the rectangle : ");
			scanf("%d%d",&l,&w);
			area=1*w;
			break;
		
		case 3:
			printf("base and higth of the triangle : ");
			scanf("%d%d",&b,&h);
			area=5*b*h;
			break;
	}
	printf("The area is : %f \n",area);
}
