#include<stdio.h>
void primeno(int);
void main()
{
	int num;
	printf("Enter a no. range to check the prime numbers in given range\n");
    scanf("%d",&num);
	primeno(num);
}
void primeno(int n){
int count=0,j,i;
for(i=2;i<=n;i++){
	count=0;
    for(j=2;j<i;j++){
	if(i%j==0){
		count=1;
		break;
	}
}
if(count==0){
	printf("%d\n",i);}

}
}