#include<stdio.h>
void main(){
	int basic,da,ta,hra,total;
	printf(" Enter your basic salary");
	scanf("%d",&basic);
	if(basic>=0 && basic<=5000)
	{
		da=(10*basic)/100;
		ta=(20*basic)/100;
		hra=(25*basic)/100;
		total=basic+da+ta+hra;
		printf(" After including DA=%d,TA=%d and HRA=%d in your basic salary\nyour Total salary is %d",da,ta,hra,total);
	}
	else{
		da=(15*basic)/100;
		ta=(25*basic)/100;
		hra=(30*basic)/100;
		total=basic+da+ta+hra;
		printf(" After including DA=%d,TA=%d and HRA=%d in your basic salary\nyour Total salary is %d",da,ta,hra,total);
	}
}