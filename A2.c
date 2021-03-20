//.Write a program to find out the max number from given 10 elements of array. 
#include<stdio.h>
main()
{
	int a[10],i,max=0;
	printf("\n enter the array element:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
	{
		max=a[i];
	}
	}

	printf("\n max number=%d",max);
}
