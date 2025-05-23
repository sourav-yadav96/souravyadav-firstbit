#include <stdio.h>
#include <string.h>
int mystrcmp(char*,char*);
void main()
{

    char str1[] = "s";
    char str2[]= "sourav";
    int res = mystrcmp(str1,str2);

    printf(" %d\n", res);
}
int mystrcmp(char* str1, char* str2) {
    int i = 0;
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
}
/*{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			if(str1[i]>str2[i]){
				return 1;
			}
			else{
				return -1;
			}
			
		}i++;
}
	if(str1[i]='\0'){
		return -1;
	}
	if(str2[i]='\0'){
		return 1;
	}
	else{
	return 0;
}
}*/