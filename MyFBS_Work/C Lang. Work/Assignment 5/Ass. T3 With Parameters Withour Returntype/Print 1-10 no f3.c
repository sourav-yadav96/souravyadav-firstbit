#include<stdio.h>
void print1to10num(int);
void main()
{
	print1to10num(1);
}
void print1to10num(int a)
{
	while(a<=10){
		printf("%d\n",a);
		a++;
	}
}