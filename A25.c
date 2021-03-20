// Write a Program of Make a string reverse using recursive Function.
#include<stdio.h>
void revsen()
{
	char c;
	scanf("%c ",&c);
	if(c != '\n')
	{
		revsen();
		printf("%c",c);
	}
}
int main()
{
	printf("enter the sentence:");
	revsen();
	return 0;
}
