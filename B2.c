#include<stdio.h>
main()
{
	int a,b,sum,sub,mul,div;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("\nenter the value of b");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\naddition of a and b=%d ",sum);
	printf("\nsubtraction of a and b=%d ",sub);
	printf("\nmultipication of a and b=%d ",mul);
	printf("\ndivision of a and b=%d ",div);
}
