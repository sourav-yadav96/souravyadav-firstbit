#include<stdio.h>
void main(){
int num,count=0,i;
printf("Enter a no. to check the no is prime no. or not\n");
scanf("%d",&num);
for(i=2;i<num;i++){
	if(num%i==0){
		count++;
		break;
	}
}
if(count==0){
	printf("No. is prime no.");
}
else{
	printf("No. is not a prime no.");
}
}