/*  1
	4  4
	9  9  9
	16 16 16 16
	25 25 25 25
	*/
#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i*i);
		}	
		printf("\n");
		
	}
} 
