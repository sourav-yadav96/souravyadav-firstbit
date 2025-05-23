#include<stdio.h>
void main(){
	int num,i=1,sum=0;
	printf("Enter a no. to check the no. is perfect or not.\n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==num){
		printf("No is perfect");
	}
	else{
		printf("No is not perfect");
	}
}