#include <stdio.h>
void main() {
	int no1,no2,ch,add,sub,div,mul;

	printf("Enter your choice :- 1. For addition enter 1\n 2. For substraction enter 2\n 3. For division enter 3\n 4. For multiplication enter 4\n");
	scanf("%d",&ch);
	printf("User choice is %d\n",ch);
	printf ("Enter two numbers no1 and no2\n");
	scanf("%d%d",&no1, &no2);
	if(ch==1) {
		add= no1+no2;
		printf("Addition of %d and %d is %d",no1,no2,add);
	} else {
		if(ch==2) {
			sub=no1-no2;
			printf("substraction of %d and %d is %d",no1,no2,sub);
		}
		 else if(ch==3) {

			div=no1/no2;
			printf("Division of %d and %d is %d",no1,no2,div);
		} else {
			if(ch==4) {
				mul=no1*no2;
				printf("Multiplication of %d and %d is %d",no1,no2,mul);
			} else {
				printf("invalid choice");
			}
		}
	}
}


