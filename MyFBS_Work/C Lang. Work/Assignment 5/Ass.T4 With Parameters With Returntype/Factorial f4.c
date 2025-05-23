#include<stdio.h>
int factorial(int);
void main(){
	int num,res;
	printf(" Enter a no. to find factorial\n");
	scanf("%d",&num);
	res=factorial(num);
	printf("Factorial is %d",res);
}
int factorial(int n){
	int i,fact=1;
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		return fact;
}