//write a program make a sum of given numbers....
#include<stdio.h>
main()
{
	int num,r,sum=0;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("value of sum=%d",sum);
}
