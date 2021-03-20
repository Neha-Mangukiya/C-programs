//Write a program to find out the second smallest number from the array........
#include<stdio.h>
int main()
{
	int a[5],i,j,temp;
	for(i=0;i<5;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("\n \t a[%d]=%d",i,a[i]);
	}
	printf("\n second smallest number is  = %d",a[1]);
}

