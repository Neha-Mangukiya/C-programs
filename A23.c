//Write a Program of Factorial using Recursive Function
#include<stdio.h>
int fact(int num)
{
    int f;
    if(num==1)
    {
        return 1;
    }
    else{
        f=num*fact(num-1);
    }
    return f;
}
int main()
{
    printf("fact of 5=%d",fact(5));
    return 0;
}