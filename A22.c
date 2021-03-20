//Write a program to print the string in reverse order using function
#include<stdio.h>
void strev()
{
	char name[100],str[5];
	int i=0,j=0;
	printf("\n enter the name");
	gets(name);
	printf("\n name=");
	puts(name);
	while(name[i] != '\0')
	{
		i++;
	}
	i--;
	//printf("\n enter of string = %d",i);
	while(name[i] > 0)
	{
		str[j] = name[i];
		i--;
		j++;
	}
	str[j]='\0';
	printf("\n revers=%s",str);
}
int main()
{
	strev();
}