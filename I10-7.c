/*	 *
   	* *
   * * *
  * * * *
 * * * * *

*/
#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
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
