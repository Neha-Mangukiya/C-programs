//Write a program to enter a five elements using Array and print it on a screen.
#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter the array element:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	printf("\n a[%d]=%d",i,a[i]);
	printf("\n");
}
