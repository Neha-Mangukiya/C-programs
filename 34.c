/*			*
		  * * *
	    * * * * *
	  * * * * * * *
	* * * * * * * * *
	*/
#include<stdio.h>
main()
{
	int i,j,n,k,num,num1;
	printf("print thr valur of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=5;
	for(j=4;j>=i;j--)
		{
		printf(" ");
		num--;
		}	
	for(k=1;k<=i;k++)
	{
		printf("*");
		num--;
	}
	num1=2;
	for(k=2;k<=i;k++)
	{
		printf("*");
		num++;
	}
	printf("\n");
	}
}

