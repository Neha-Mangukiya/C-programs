//Write a program to print first N terms of Fibonacci series.....
#include<stdio.h>
main()
{
	int n,t1=0,t2=1,next,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d,",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}
}
