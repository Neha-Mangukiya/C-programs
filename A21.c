//Write a program to find out the max number from given array using function.....
#include<stdio.h>
int maxarr(int max)
{
	int i,a[5];
	printf("\n enter the array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	//printf("\n max num=%d",max);
	return max;
}
void main()
{
	printf("\n max number =%d",maxarr(0));
}