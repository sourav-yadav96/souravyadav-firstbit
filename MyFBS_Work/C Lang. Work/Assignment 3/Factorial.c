#include<stdio.h>
void main(){
	int num,i;
	printf("Enter a no. for finding factorial of that no.\n");
	scanf("%d",&num);
		int fact=1;
		for(i=num;i>=1;i--){
			fact=fact*i;
		}
	printf("Factorial of no. %d is %d",num,fact);
	}