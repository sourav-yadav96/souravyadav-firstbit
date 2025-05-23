#include<stdio.h>
void main()
{
	int c;
	float f;
	printf("Enter the Temprature in Degree Celsius which you want to convert in Fahrenheit\n");
	scanf("%d",&c);
	f = c* (9/5) + 32;
	printf("The conversion of %d degree Celsius to Fahrenheit is %f",c,f);
}