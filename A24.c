//Write a Program of Print a number and check the number is palindrome or not using recursive Function
#include<stdio.h>
int revn(int num)
{
	static int revnum=0; 
	int r;
	printf("enter the num:");
	scanf("%d",&num);
	if (num!=0)
	{
		r=num%10;
		revnum=(revnum*10)+r;
		revn(num/10);
	}
	//printf("\n revnum=%d",revnum);
	return revnum;
}
void main()
{
	int num;
	scanf("%d",&num);
	(num == revn(num)) ? printf("\n given number is palindrome"):  printf("\n given number is not palindrome");
}
