#include<stdio.h>
void evenoddchecker(int);
void main()
{
	int num;
	printf ("Enter the number to find out that no.is even or odd\n");
	scanf("%d",&num);
	evenoddchecker(num);
}
void evenoddchecker(int n){
	if(n%2==0)
	{
		printf("The given no is even");
	}
	else
	{
		printf("The given no is odd");
	}
}