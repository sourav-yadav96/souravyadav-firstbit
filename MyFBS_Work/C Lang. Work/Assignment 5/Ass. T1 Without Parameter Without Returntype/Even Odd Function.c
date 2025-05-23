#include<stdio.h>
void evenoddchecker();
void main()
{
	evenoddchecker();
}
    void evenoddchecker()
    {
	int num;
	printf ("Enter the number to find out that no.is even or odd\n");
	scanf("%d",&num);
	num%2==0?printf("The given no is even"):printf("The given no is odd");
}