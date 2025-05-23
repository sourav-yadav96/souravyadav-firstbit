#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    char str1[100];
    int i=0,j=0,c1=0,c2=0;
    printf("Enter 1st string: ");
    scanf("%s",str);
    printf("Enter 2nd string: ");
    scanf("%s",str1);
    if(str[i]!='\0'){
    	c1++;
    	i++;
	}
	printf("%d",c1);
	if(str1[j]!='\0'){
		c2++;
		j++;
	}
	if(c1>c2){
		printf("%s",str);
	}
	else{
		printf("%s",str1);
	}
}