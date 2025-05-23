#include<stdio.h>
int factorial();
void main(){
	int res;
	res=factorial();
	printf("Factorial of no. is %d",res);
}
int factorial(){
	int num,i;
	printf("Enter a no. for finding factorial of that no.\n");
	scanf("%d",&num);
		int fact=1;
		for(i=num;i>=1;i--){
			fact=fact*i;
		}
		return fact;
	}