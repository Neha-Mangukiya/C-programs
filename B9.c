#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c=a+b;
	a=a-b;
	b=c-a;
	printf("value of a=%d",a);
	printf("value of b=%d",b);
}
