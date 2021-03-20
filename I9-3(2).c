//factorial of given numbers.....
#include<stdio.h>
main()
{
	int n,i=1,j=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	while(i<=n)
	{
		j=j*i;
		i++;
	}
	printf("\n factorial of given number is = %d",j);
}
