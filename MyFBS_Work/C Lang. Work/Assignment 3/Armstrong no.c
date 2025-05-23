#include<stdio.h>
void main()
{
	int num,count=0,arm=0;
	int rem,i,copy;
	printf("Enter a no. which you want to check that no. is Armstronge no. or not\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0){
		count++;
		num=num/10;
	}
	for(i=temp;i>0;i=i/10){
		rem=i%10;
		int sum=1;
		copy=count;
		while(copy>0){
			sum=sum*rem;
			copy--;
		}
		arm=arm+sum;
	}
	if(arm==temp){
		printf("No is Armstronge");
	}
	else{
		printf("NO is Not Armstronge");
	}
}