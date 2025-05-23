#include<stdio.h>
void main(){
int num,count=0,j,i;
printf("Enter a no. range to check the prime numbers in given range\n");
scanf("%d",&num);
for(i=2;i<=num;i++){
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