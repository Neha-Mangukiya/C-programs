//Write a program of structure for five employee that provides the following 
//information -print and display empno,empname,address and age
#include<stdio.h>
struct employee{
	int empno;
	int age;
	char emname[20];
	char address[50];
};
int main()
{
	struct employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n enter the num: & enter the name: & enter the address: & enter the age: ");
		scanf("\n%d %s %s %d",&e[i].empno,&e[i].emname,&e[i].address,&e[i].age);
	}
	for(i=0;i<5;i++)
		{
			printf("\n empno=%d & emname=%s & address=%s & age=%d",e[i].empno,e[i].emname,e[i].address,e[i].age);
		}
}