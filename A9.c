//Write a program of Multiplication make Subtraction of two matrix using 2-D Array......
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k ,sum;
	printf("enter the value of a:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("enter the value of b:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
    printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
				for(k=0;k<2;k++)
				{
			sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;
				}
		}
	}
		printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",c[i][j]);
		}
		printf("\n");
}
}