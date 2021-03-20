/*Write a program to enter a ten elements using Array and make a summation of
the numbers and average of summation*/
#include<stdio.h>
main()
{
	int a[10],i,ans=0;
	float average;
	printf("\n enter the array element:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	printf("\n a[%d]=%d",i,a[i]);
	ans=ans+a[i];
	average=ans/10;
}
	printf("\n ans=%d",ans);
	printf("\n average=%f",average);
	printf("\n");
}
