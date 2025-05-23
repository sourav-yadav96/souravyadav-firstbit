#include<stdio.h>
int palindromeno(int);
void main()
{
	int num,res;
	printf("Enter a no which you want to check that no. is palindrome num. or not\n");
	scanf("%d",&num);
	res=palindromeno(num);{
	if(res==1){
		printf("No is palindrom");
	}
	else{
		printf("No is not palindrom");
	    }
	}
}
int palindromeno(int n)
{
	int rem,rev=0;
	int temp=n;
	while(n>0){
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(rev==temp){
		return 1;
	}
	else{
		return 0;
	    }
    }
