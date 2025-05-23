#include<stdio.h>
float fahrenheittocelsiusconversion();
void main()
{
	float res;
	res=fahrenheittocelsiusconversion();
	printf("The conversion of degree Celsius to Fahrenheit is %ff",res);
}	
float fahrenheittocelsiusconversion()
{  
    int c;
	float f;
	printf("Enter the Temprature in Degree Celsius which you want to convert in Fahrenheit\n");
	scanf("%d",&c);
	f = c* (9/5) + 32;
	return f;
}