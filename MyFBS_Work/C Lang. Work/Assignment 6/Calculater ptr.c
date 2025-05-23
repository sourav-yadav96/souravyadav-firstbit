#include <stdio.h>
void addition(int*,int*);
void substraction(int*,int*);
void division(int*,int*);
void multiplication(int*,int*);
void main() {
	int num1,num2,ch;
    printf("Enter your choice :- 1. For addition enter 1\n 2. For substraction enter 2\n 3. For division enter 3\n 4. For multiplication enter 4\n");
	scanf("%d",&ch);
	printf("User choice is %d\n",ch);
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d %d",&num1, &num2);
	if(ch==1) 
	{ 
	addition(&num1,&num2);
    }
    else if(ch==2)
	{
    substraction(&num1,&num2);
    }
    else if(ch==3) {
    division(&num1,&num2);
    }
    else if(ch==4) {
    multiplication(&num1,&num2);
    }
	 else {
		    printf("invalid choice");
	      }
}
void addition(int *x,int *y){
	int add;
	add= (*x)+(*y);
	printf("Addition of no1 and no2 is %d",add);
}
void substraction(int *x,int *y){
	int sub;
	sub=(*x)-(*y);
	printf("substraction of no1 and no2 is %d",sub);
}
void division(int *x,int *y){
	int div;
	div=*(x)/(*y);
	printf("Division of no1 and no2 is %d",div);
}
void multiplication(int *x,int *y){
	int mul;
	mul=(*x)*(*y);
	printf("Multiplication of no1 and no2 is %d",mul);
}


