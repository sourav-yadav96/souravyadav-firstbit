#include <stdio.h>
int addition(int,int);
int substraction(int,int);
int division(int,int);
int multiplication(int,int);
void main() {
	int n1,n2,ch,res;
    printf("Enter your choice :- 1. For addition enter 1\n 2. For substraction enter 2\n 3. For division enter 3\n 4. For multiplication enter 4\n");
	scanf("%d",&ch);
	printf("User choice is %d\n",ch);
	if(ch==1) { 
	  res= addition(n1,n2);
	  printf("Addition of no1 and no2 is %d",res);
}
    else if(ch==2) {
      res= substraction(n1,n2);
      printf("substraction of no1 and no2 is %d",res);
    }
    else if(ch==3) {
      res= division(n1,n2);
      printf("Division of no1 and no2 is %d",res);
    }
    else if(ch==4) {
      res= multiplication(n1,n2);
      printf("Multiplication of no1 and no2 is %d",res);
    }
	 else {
		    printf("invalid choice");
	      }
}
int addition(int x,int y){
	int add;
	add = x+y;
	return add;
}
int substraction(int x,int y){
	int sub;
	sub=x-y;
	return sub;
}
int division(int x,int y){
	int div;
	div=x/y;
	return div;
}
int multiplication(int x,int y){
	int mul;
	mul=x*y;
	return mul;
}


