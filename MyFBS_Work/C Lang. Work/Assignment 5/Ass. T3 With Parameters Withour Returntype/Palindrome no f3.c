#include<stdio.h>
void palindromeno(int);
void main()
{
	int num;
	printf("Enter a no which you want to check that no. is palindrome num. or not\n");
	scanf("%d",&num);
	palindromeno(num);
}
void palindromeno(int n)
{
	int rem,rev=0;
	int temp=n;
	while(n>0){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(rev==temp){
		printf("No is palindrom");
	}
	else{
		printf("No is not palindrom");
	    }
    }
