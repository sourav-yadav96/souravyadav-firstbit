#include<stdio.h>
#include<string.h>
char* mystrlwr(char*);
 
void main()
{
    char str[ ] = "FIRST bit SoLution Pune";
    mystrlwr(str);
    printf("%s\n",str) ;
} 
 char* mystrlwr(char* str){
	int i=0;
	while(str[i]!='\0'){
		if ((str[i]>='A')&&(str[i]<='Z') ){
        str[i]=str[i]+32;
		}
        if(str[i]=='\0')
        break;
        i++;
	}
}