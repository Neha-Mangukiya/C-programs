//Write a program to print the Fibonacci series using function....
#include<stdio.h>
int fibo(int t1,int t2)
{
    int i,n,next;
    printf("\n enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d,",t1);
        next=t1+t2;
        t1=t2;
        t2=next;
        
    }

    return 0;
}
int main()
{
    fibo(0,1);
    return 0;
}