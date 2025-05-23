#include<stdio.h>
void add(int*,int*);
void factorial(int*);
void main(){
	int a,b;
	printf(" Enter two no. for Addition\n");
	scanf("%d %d",&a,&b);
	add(&a,&b);
	int num;
	printf(" Enter a no. to find factorial\n");
	scanf("%d",&num);
	factorial(&num);
}
void add(int *x,int *y){
	int sum;
	sum=(*x)+(*y);
	printf("Addition is %d\n",sum);
}
void factorial(int *n){
	int i,fact=1;
		for(i=1;i<=(*n);i++){
			fact=fact*i;
		}
			printf("Factorial is %d",fact);
		
	}