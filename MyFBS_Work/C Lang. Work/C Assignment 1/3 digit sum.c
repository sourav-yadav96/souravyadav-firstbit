#include<stdio.h>
void main()
{
	int num,r1,r2,r3,q1,q2,sum,rev;
	printf("Enter a 3 digit no. to find out digits sum and reverce of that number \n");
	scanf("%d",&num);
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	sum=r1+r2+r3;
	rev=(r1*100+r2*10+r3);
	printf(" The sum of digits of no. %d is %d",num,sum);
	printf (" The reverce of no.%d is %d",num,rev);
}