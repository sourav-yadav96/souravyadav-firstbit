#include<stdio.h>
#include<string.h>
char* mystrrev(char*);
void main()
{
    char str[50] = "firstbit";
    printf("The given string is %s\n", str);
    mystrrev(str);

    printf("After reversing string is %s",str);
}
char* mystrrev(char* str){
	int len=0,i=0;
	while(str[i]!='\0'){
		len++;
		i++;
		}
	int start=0;
	int end=len-1;
	char temp;
	while(start<=end){
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
		
	}
}
