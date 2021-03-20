/*			*
	       * *
	      * * *
	     * * * *
	    * * * * *
	    */
#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("print thr valur of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
	
