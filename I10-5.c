/*   - - - - 1
	 - - - 2 1
	 - - 3 2 1
	 - 4 3 2 1
	 5 4 3 2 1
*/
#include<stdio.h>
main()
{
	int i,j,n,k,num;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{num=5;
		for(j=4;j>=i;j--)
		{
			printf("  ");
			num--;
		}
		
			for(k=1;k<=i;k++)
			{
				printf("%d ",num);
				num--;
			}
			
		printf("\n");
		
	}
}
