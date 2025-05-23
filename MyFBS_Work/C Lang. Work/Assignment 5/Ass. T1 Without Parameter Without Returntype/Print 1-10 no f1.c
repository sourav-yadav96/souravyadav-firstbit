#include<stdio.h>
void print1to10num();
void main()
{
	print1to10num();
}
void print1to10num()
{
	int a=1;
	while(a<=10){
		printf("%d\n",a);
		a++;
	}
}