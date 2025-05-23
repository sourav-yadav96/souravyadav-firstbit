#include<stdio.h>
void main(){
	int num,temp,rem,sum=0,i;
	printf("Enter a no. for checking the no. is Strong no. or not.\n");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		rem=num%10;
		int fact=1;
		for(i=rem;i>=1;i--){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==temp){
		printf("No is Strong");
	}
	else{
		printf("No. in not Strong");
	}
	}