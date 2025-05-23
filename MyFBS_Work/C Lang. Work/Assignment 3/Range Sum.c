#include<stdio.h>
void main(){
	int n1,n2,i,sum=0;
	printf("Enter two no.n1 and n2 for checking sum of no. in given range\n");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++){
		sum=sum+i;
	}
	printf("The sum is %d",sum);
	
}