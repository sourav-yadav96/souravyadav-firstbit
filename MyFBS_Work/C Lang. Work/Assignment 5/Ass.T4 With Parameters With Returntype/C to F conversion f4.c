#include<stdio.h>
float fahrenheittocelsiusconversion(int);
void main()
{
	float res;
	int c;
	printf("Enter the Temprature in Degree Celsius which you want to convert in Fahrenheit\n");
	scanf("%d",&c);
	res=fahrenheittocelsiusconversion(c);
	printf("The conversion of degree Celsius to Fahrenheit is %ff",res);
}	
float fahrenheittocelsiusconversion(int a)
{  
    float f;
	f = a* (9/5) + 32;
	return f;
}