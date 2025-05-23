#include<stdio.h>
void main()
{
	int num,rem,rev=0;
	printf("Enter a no which you want to check that no. is palindrome num. or not\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(rev==temp){
	printf("No is palindrom");
	}
	else{
		printf("No is not palindrom");
	}
}