//Write a program to find out the Max number from given Matrix.....
#include<stdio.h>
int main()
{
	int a[2][2],i,j,max=0;
	printf("enter the value of a:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t %d",a[i][j]);
    if(max<a[i][j])
    {
        max=a[i][j];
    }
        }
    printf("\n");
}
printf("\n max num from given matrix=%d",max);
printf("\n");
}