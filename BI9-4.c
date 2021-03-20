//Write a program you have to print the Fibonacci series up to user givennumber....
#include<stdio.h>
main()
{
	int t1=0,t2=1,n,i,next;
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
