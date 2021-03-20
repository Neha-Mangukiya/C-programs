#include<stdio.h>
main()
{
	int i,j,n,k,start=1,m;
	printf("enter the value of n:");
	scanf("%d",&n);
	m=(n/2)+1;
	for(i=1;i<=n;i++)
	{
	if(i<=m)
		{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		}
		else
		{
			for(k=1;k<i;k++)
			{
				printf(" ");
			}
		for(j=4;j>=start;j--)
		{
			printf("* ");
		}
		start++;
	}
		printf("\n");
	}
	
}
