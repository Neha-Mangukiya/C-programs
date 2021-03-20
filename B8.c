#include<stdio.h>
main()
{
	int sub1,sub2,sub3,sub4,sub5,total,percentage;
	printf("enter the value of sub1:");
	scanf("%d",&sub1);
	printf("/nenter the value of sub2:");
	scanf("%d",&sub2);
	printf("/nenter the value of sub3:");
	scanf("%d",&sub3);
	printf("/nenter the value of sub4:");
	scanf("%d",&sub4);
	printf("/nenter the value of sub5:");
	scanf("%d",&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	percentage=(total/5);
	printf("/nsubject total=%d",total);
	printf("/nsubject percentage=%d",percentage);
}
