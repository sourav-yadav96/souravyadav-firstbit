#include<stdio.h>
void rangesum(int,int);
void main()
{
	int n1,n2;
	printf("Enter two no.n1 and n2 for checking sum of no. in given range\n");
	scanf("%d %d",&n1,&n2);
	rangesum(n1,n2);
}
void rangesum(int a,int b){
	int i,sum=0;
	
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	printf("The sum is %d",sum);
	
	
}