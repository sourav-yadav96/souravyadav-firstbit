#include<stdio.h>
#include<string.h>
char* mystrupr(char*);
 
void main()
{
    char str[ ] = "First bit solution Pune";
    mystrupr(str);
    printf("%s\n",str) ;
} 
 char* mystrupr(char* str){
	int i=0;
	while(str[i]!='\0'){
		if ((str[i]>='a')&&(str[i]<='z') ){
        str[i]=str[i]-32;
		}
        if(str[i]=='\0')
        break;
        i++;
	}
}