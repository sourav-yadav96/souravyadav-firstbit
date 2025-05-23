#include <stdio.h>
#include <string.h>
int mystrrcmp(char*,char*,int);
void main()
{

    char str1[] = "s";
    char str2[]= "sourav";
    int size=2;
    int res = mystrrcmp(str1,str2,size);

    printf(" %d\n", res);
}
int mystrrcmp(char* str1, char* str2,int size) {
	int i=0;
    for(int j = 0;j<size;j++){
    while(str1[i] == str2[i]) {
        if(str1[i] == '\0' || str2[i] == '\0') {
            break;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    }
    else if(str1[i]>str2[i]){
        return 1;
    }
    else{
    	return -1;
	}
	j++;
}
}