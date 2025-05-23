#include<stdio.h>
void armstrongeno(int);
int main()
{
	int num;
	printf("Enter a no. which you want to check that no. is Armstronge no. or not\n");
	scanf("%d",&num);
	armstrongeno(num);
}
void armstrongeno(int n){
	int m,count=0,arm=0;
	m=n;
	int rem,i,copy;
	while(n>0){
		count++;
		n=n/10;
	}
	for(i=m;i>0;i=i/10){
		rem=i%10;
		int sum=1;
		copy=count;
		while(copy>0){
			sum=sum*rem;
			copy--;
		}
		arm=arm+sum;
	}
	if(arm==m){
		printf("No is Armstronge");
	}
	else{
		printf("NO is Not Armstronge");
	}

	
}