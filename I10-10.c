/*  1
	2  3
	4  5  6
	7  8  9  10
	11 12 13 14 15
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
			printf("%d ",k);
			k++;
		}	
		printf("\n");
		
	}
}
