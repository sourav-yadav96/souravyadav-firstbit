#include<stdio.h>
void main()
{
	int num;
	printf ("Enter the number to find out that is even or odd\n");
	scanf("%d",&num);
	num%2==0?printf("The given no is even"):printf("The given no is odd");
}