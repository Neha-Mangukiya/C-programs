#include<stdio.h>
main()
{
	//The formula for calculating Simple Interest is P x r x t ÷ 100, where P=Principal Amount, Rate of Interest & T= Time.
	float p,r,t,SI;
	printf("enter the value of p:");
	scanf("%f",&p);
	printf("enter the value of r:");
	scanf("%f",&r);
	printf("enter the value of t:");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("\nsimple interest=%f",SI);
}
