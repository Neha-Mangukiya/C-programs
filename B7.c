#include<stdio.h>
main()
{
	//(32°F - 32) × 5/9 = 0°C
	float degree,fahrenheit;
	printf("enter the value of fahrenheit:");
	scanf("%f",&fahrenheit);
	degree=(5*(fahrenheit-32))/9;
	printf("\ntemperature=%f",degree);
}
