//Write a program of structure employee that provides the following information
//print and display empno, empname,address and age
#include<stdio.h>
struct employee{
	int empno[10], age[3];
	char emname[20], address[50];
};
int main()
{
	struct employee e1;
	printf("\n enter the num:");
	scanf("%s",&e1.empno);
	printf("\n enter the name:");
	scanf("%s",e1.emname);
	printf("\n entr the address:");
	scanf("%s",e1.address);
	printf("\n enter the age:");
	scanf("%s",&e1.age);
	printf("\n num=%s",e1.empno);
	printf("\n name=%s",e1.emname);
	printf("\n address=%s",e1.address);
	printf("\n age=%s",e1.age);
}
