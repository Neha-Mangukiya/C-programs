#include<stdio.h>
main()
{
	int i,j,k,n,m,start=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	m=(n/2)+1;
	for(i=1;i<=n;i++)
	{
		
		if(i<=m){
				
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
		}
		else {
				
			for(j=4;j>=start;j--)
			{
				printf("* ");
			}
			start++;
		}
			printf("\n");
	}
		
}
