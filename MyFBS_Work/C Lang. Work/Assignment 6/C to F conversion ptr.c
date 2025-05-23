#include<stdio.h>
void fahrenheittocelsiusconversion(int*);
void main()
{
    int c;
	printf("Enter the Temprature in Degree Celsius which you want to convert in Fahrenheit\n");
	scanf("%d",&c);
	fahrenheittocelsiusconversion(&c);
}	
void fahrenheittocelsiusconversion(int *a)
{  
    float f;
	f = (*a) * (9/5) + 32;
	printf("The conversion of degree Celsius to Fahrenheit is %ff",f);
}