#include<stdio.h>
int evenoddchecker(int);
void main()
{
	int num,res;
	printf ("Enter the number to find out that no.is even or odd\n");
	scanf("%d",&num);
	res=evenoddchecker(num);
	{
	if (res==1)
	{
		printf("The given no is even");
	} else
	{
		printf("The given no is odd");
	}
	}
}
    int evenoddchecker(int n)
    {
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}