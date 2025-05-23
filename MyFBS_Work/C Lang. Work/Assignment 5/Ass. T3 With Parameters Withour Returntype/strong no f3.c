#include<stdio.h>
void strongno(int);
void main(){
	int num;
	printf("Enter a no. for checking the no. is Strong no. or not.\n");
	scanf("%d",&num);
	strongno(num);
}
void strongno(int n )
{
	int temp,rem,sum=0,i;
	temp=n;
	while(n>0){
		rem=n%10;
		int fact=1;
		for(i=rem;i>=1;i--){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp){
		printf("No is Strong");
	}
	else{
		printf("No. in not Strong");
	}
}