#include <stdio.h>
#include<string.h>

void main() {
    char str[100];
    char str1[10]={'a','e','i','o','u'};
    // Scan the string from the user
    printf("Enter a string: ");
    scanf("%s", str); 
    int len = strlen(str);
    int count=0,i=0,j=0;
    for(i=0;i<len;i++){
    	for(j=0;j<5;j++){
    		if(str[i]==str1[j])
            count++;
    }
    }
    printf("%d",count);
}