#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int n, i,j=0;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("String before removal: %s\n", str);
    int len = strlen(str);

    for (i = 0; i < len; i++) {
    	if(i%2==0){
        str[j++] = str[i]; 
    }
    

}
str[j] = '\0';
printf("String after removal: %s\n", str);
}