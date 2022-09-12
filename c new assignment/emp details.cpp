#include<stdio.h>
#include<cstring>

struct emp
{
	int empno;
	char empname[100];
	char empaddress[100];
	int empage;
	
	
};

main()
{

	struct emp e1;
	
	e1.empno=123;
	strcpy(e1.empname, "sahil");
	strcpy(e1.empaddress, "surat");
	e1.empage=24;
	
	
	printf("1 employee number : %d\n",e1.empno);
	printf("1 employee name : %s\n",e1.empname);
	printf("1 employee address : %s\n",e1.empaddress);
	printf("1 employee age : %d\n",e1.empage);
	printf("\n");
	
	struct emp e2;
	
	e2.empno=230;
	strcpy(e2.empname, "harsh");
	strcpy(e2.empaddress, "limbdi");
	e2.empage=29;
	
	
	printf("2 employee number : %d\n",e2.empno);
	printf("2 employee name : %s\n",e2.empname);
	printf("2 employee address : %s\n",e2.empaddress);
	printf("2 employee age : %d\n",e2.empage);
	printf("\n");
	
	struct emp e3;
	
	e3.empno=320;
	strcpy(e3.empname, "aayush");
	strcpy(e3.empaddress, "rajkot");
	e3.empage=40;
	
	
	printf("3 employee number : %d\n",e3.empno);
	printf("3 employee name : %s\n",e3.empname);
	printf("3 employee address : %s\n",e3.empaddress);
	printf("3 employee age : %d\n",e3.empage);
	printf("\n");
	
	struct emp e4;
	
	e4.empno=490;
	strcpy(e4.empname, "aryan");
	strcpy(e4.empaddress, "vadodara");
	e4.empage=25;
	
	
	printf("4 employee number : %d\n",e4.empno);
	printf("4 employee name : %s\n",e4.empname);
	printf("4 employee address : %s\n",e4.empaddress);
	printf("4 employee age : %d\n",e4.empage);
	printf("\n");
	
	struct emp e5;
	
	e5.empno=505;
	strcpy(e5.empname, "raj");
	strcpy(e5.empaddress, "ahmedabad");
	e5.empage=19;
	
	
	printf("5 employee number : %d\n",e5.empno);
	printf("5 employee name : %s\n",e5.empname);
	printf("5 employee address : %s\n",e5.empaddress);
	printf("5 employee age : %d\n",e5.empage);
	printf("\n");
	
	
}
