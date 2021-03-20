//number to print reverse order
#include<stdio.h>
main()
{
	int num,r,revnum=0;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		revnum=(revnum*10)+r;
		num=num/10;
	}
	printf("\n revnum=%d",revnum);
}
