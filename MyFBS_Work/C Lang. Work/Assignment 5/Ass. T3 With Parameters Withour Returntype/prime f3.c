#include<stdio.h>
void primenocheck(int);
void main()
{
	int num;
printf("Enter a no. to check the no is prime no. or not\n");
scanf("%d",&num);
	primenocheck(num);
}
void primenocheck(int n)
{
	int i,count=0;
for(i=2;i<n;i++){
	if(n%i==0){
		count=1;
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