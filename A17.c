//Write a program to perform addition, subtraction, multiplication and division of two numbers using Function...
#include<stdio.h>
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub(int x,int y)
{
    int z;
    z=x-y;
    return z;
}
int mul(int m,int n)
{
    int p;
    p=m*n;
    return p;
}
int division(int k,int l)
{
    float i;
    i=k/l;
    return i;
}
int main()
{
    printf("\n addition of a and b=%d",add(3,5));
    printf("\n sunstraction of x and y=%d",sub(7,2));
    printf("\n multiplication of m and n=%d",mul(5,4));
    printf("\n division of k and l=%d",division(6,4));
    return 0;
}