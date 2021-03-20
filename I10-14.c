#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
