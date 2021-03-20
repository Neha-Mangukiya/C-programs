//Write a program to enter a ten elements using Array and find out the to count the
//total number of odd and even numbers
#include<stdio.h>
main()
{
	int a[10],i;
	printf("\n enter the array element:");
	for(i=0;i<11;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<11;i++)
	{
	printf("\n a[%d]=%d",i,a[i]);
	if(a[i]%2==0)
	{
		printf(" number is even");
	}
	else
	{
		printf(" number is odd");
	}
	}
}
