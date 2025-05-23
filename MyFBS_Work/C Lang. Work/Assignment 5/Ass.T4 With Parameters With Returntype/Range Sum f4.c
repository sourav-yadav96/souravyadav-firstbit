#include<stdio.h>
int rangesum(int,int);
void main()
{
	int n1,n2,res;
	printf("Enter two no.n1 and n2 for checking sum of no. in given range\n");
	scanf("%d %d",&n1,&n2);
	res=rangesum(n1,n2);
	printf("The sum is %d",res);
	
}
int rangesum(int a,int b){
	int i,sum=0;
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	return sum;	
}