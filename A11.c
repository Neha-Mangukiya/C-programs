//Write a program to convert the string from uppercase to lowercase and vice versa.....
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10],str[5];
    //int i=0;j=0;
    printf("enter the name:");
    gets(name);
    printf("\n name=");
    puts(name);
    printf("\n upeer to lower=%s", strlwr(name));
    printf("\n lower to upper=%s",strupr(name));
}
