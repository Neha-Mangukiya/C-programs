//Write a program to make string reverse and check the given string is palindrome or 
//not without using string function....
#include<stdio.h>
int main()
{
	char name[100],str[50],flag;
	int i=0,j=0;
	printf("enter the name:");
	gets(name);
	printf("name=");
	puts(name);
	while(name[i]!='\0')
	{
		i++;
	}
	i--;
	while(name[i]>0)
	{
		str[j]=name[i];
		i--;
		j++;
		
	}
	str[j]='\0';
	printf("\n reverse=%s",str);
	i=0;
	j=0;
	while(name[i]!='\0')
	{
		if(name[i] == str[j])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
		i++;
		j++;
	}
	printf("\n flag =%d",flag);
	flag==1?printf("\n string is palindrome"):printf("\n string is not palindrome");
}