#include <stdio.h>
int addition();
int substraction();
int division();
int multiplication();
void main() {
	int no1,no2,ch,add,sub,div,mul,res;

	printf("Enter your choice :- 1. For addition enter 1\n 2. For substraction enter 2\n 3. For division enter 3\n 4. For multiplication enter 4\n");
	scanf("%d",&ch);
	printf("User choice is %d\n",ch);
	if(ch==1) { 
	  res= addition();
	  printf("Addition of no1 and no2 is %d",res);
}
    else if(ch==2) {
      res= substraction();
      printf("substraction of no1 and no2 is %d",res);
    }
    else if(ch==3) {
      res= division();
      printf("Division of no1 and no2 is %d",res);
    }
    else if(ch==4) {
      res= multiplication();
      printf("Multiplication of no1 and no2 is %d",res);
    }
	 else {
		    printf("invalid choice");
	      }
}
int addition(){
	int no1,no2,add;
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d%d",&no1, &no2);
	add= no1+no2;
	return add;
}
int substraction(){
	int no1,no2,sub;
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d%d",&no1, &no2);
	sub=no1-no2;
	return sub;
}
int division(){
	int no1,no2,div;
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d%d",&no1, &no2);
	div=no1/no2;
	return div;
}
int multiplication(){
	int no1,no2,mul;
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d%d",&no1, &no2);
	mul=no1*no2;
	return mul;
	
}


