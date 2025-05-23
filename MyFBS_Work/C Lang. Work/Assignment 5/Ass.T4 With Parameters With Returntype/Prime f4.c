#include<stdio.h>
int primenocheck(int);
int main()
{
	int num,res;
    printf("Enter a no. to check the no is prime no. or not\n");
    scanf("%d",&num);
	res=primenocheck(num);
	{
	   if(res==0)
	   {
	   printf("No. is prime no.");
	   }
       else
	   {
	   printf("No. is not a prime no.");
       }
    }
}
int primenocheck(int n)
{
	int i,count=0;
    for(i=2;i<n;i++){
	if(n%i==0){
		count=1;
		break;
	}
}
    return count;
}
