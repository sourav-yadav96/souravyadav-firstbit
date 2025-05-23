#include<stdio.h>
void perfectno(int);
void main()
{
	int num;
	printf("Enter a no. to check the no. is perfect or not.\n");
	scanf("%d",&num);
	perfectno(num);
}
void perfectno(int n){
	int i=1,sum=0;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
}
if(sum==n)
	{
		printf("No is perfect");
	}
	else
	{
		printf("No is not perfect");
	}
}