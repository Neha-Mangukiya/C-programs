//Write a program co concatenate the two string without using string function....
#include<stdio.h>
int main()
{
	char st1[10],st2[10],flag;
	int i=0,j;
	printf("enter the st1:");
	gets(st1);
	printf("enter the st2:");
	gets(st2);
	while(st1[i] !='\0')
	{
		i++;
	}
	j=0;
	while(st2[j] != '\0')
	{
		st1[i]=st2[j];
		i++;
		j++;
	}
	st1[i]='\0';
	printf("\n concate=%s",st1);
}