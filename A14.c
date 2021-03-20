//Write a program to copy string from one string to another string without using string function....
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10],str2[10];
    int i,j;
    printf("enter the str1:");
    gets(str1);
    printf("\n str1=");
    puts(str1);
    for(i=0;i<=3;i++)
    {
    for(j=0;j<=3;j++)
    {
        str1[i]=str2[j];
    }
    printf("\n enter the string2=%s",str1[i]);
    }
    
}
