//write a program to find out the max num from given number.....
#include<stdio.h>
main()
{
	int num,r,max=0;
	printf("enter the num:");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		if(max<r)
		{
			max=r;
			
		}
		num=num/10;
	}
	printf("value of max number=%d",max);
}
