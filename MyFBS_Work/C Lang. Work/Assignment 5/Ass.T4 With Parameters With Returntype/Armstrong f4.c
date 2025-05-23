#include<stdio.h>
int armstrongeno(int);
int main()
{
	int num,temp,res;
	printf("Enter a no. which you want to check that no. is Armstronge no. or not\n");
	scanf("%d",&num);
	temp=num;
	res=armstrongeno(num);{
	if(res==temp){
		printf("No is Armstronge");
	}
	else{
		printf("NO is Not Armstronge");
	}
}
}
int armstrongeno(int n){
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
	return arm;
	
}