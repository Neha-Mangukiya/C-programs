#include<stdio.h>
void main()
{
int i,j,t;
printf("enter the value of j:");
scanf("%d",&j);
for(i=1;i<=10;i++)
{
t=j*i;
printf(" \n table %d*%d=%d",j,i,t);
}
}
