//Write a program to count the total number of word from given string without using string function....
#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int i=0;
    printf("enter the name:");
    gets(name);
    printf("\n name=");
    puts(name);
    while(name[i] != '\0'){
        i++;
    }
    i--;
    printf("\n lenth of string=%d",i);
    //getch();
}
