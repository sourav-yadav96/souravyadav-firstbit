#include<stdio.h>
int palindromeno();
void main()
{
	int res;
	res=palindromeno();{
	if(res==1){
		printf("No is palindrom");
	}
	else{
		printf("No is not palindrom");
	    }
    }
}
int palindromeno()
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
		return 1;
	}
	else{
		return 0;
	}
}