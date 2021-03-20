/*  1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1
	*/
#include<stdio.h>
main()
{
	int i,j,k=1,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
	}
		printf("\n");
}
}
