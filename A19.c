//Write a program to find out the factorial of given number using function....
#include<stdio.h>
int fact(int n)
{
    int i=1,j=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=j*i;
        i++;
    }
    return j;
}
int main()
{
    //fact(5);
    printf("\n factorial of given number=%d",fact(5));
    return 0;
}