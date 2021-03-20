//Write a program to find out the Square and cube of given number using function.....
#include<stdio.h>
int square(int a)
{
    int b;
    b=a*a;
    return b;
}
int cube(int c)
{
    int d;
    d=c*c*c;
    return d;
}
int main()
{
    printf("\n square of a=%d",square(5));
    printf("\n cube of a=%d",cube(3));
    return 0;
}