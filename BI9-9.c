//write a program you have to make a summation of first and last digit....
#include<stdio.h>
main()
{
	int num,r1,r2,max=0,revnum=0;
	printf("enter the num:");
	scanf("%d",&num);
	r1=num%10;

	while(num!=0)
	{
		r2=num % 10;
		revnum=(revnum*10)+r2;
		
	    num=num/10;
	}
	printf("\n revnum=%d",revnum);
	printf("\n r2=%d",r2);
	printf("\n r1=%d",r1);	
	max=r1+r2;
	printf("\n value of max=%d",max);
}
