#include<stdio.h>
int digitsum();
int reverceno();
void main()
{
	int res;
	res=digitsum();
	printf(" The sum of digits of no. is %d\n",res);
	res=reverceno();
	printf (" The reverce of no. is %d",res);
	
}
int digitsum()
{
	int num,r1,r2,r3,q1,q2,sum;
	printf("Enter a 3 digit no. to find out digits sum of that number \n");
	scanf("%d",&num);
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	sum=r1+r2+r3;
	return sum;
}
int reverceno()
{
	int num,r1,r2,r3,q1,q2,rev;
	printf("Enter a 3 digit no. to find out reverce of that number \n");
	scanf("%d",&num);
	r1=num%10;
	q1=num/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	rev=(r1*100+r2*10+r3);
	return rev;
}