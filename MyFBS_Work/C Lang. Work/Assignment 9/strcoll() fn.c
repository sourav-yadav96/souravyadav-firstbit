#include <stdio.h>
#include <string.h>
 
void main()
{
    char str1[30];
    char str2[30];
    int ret;
 
    strcpy(str1, "Firstbitsolution");
    strcpy(str2, "Firstbit");
 
    ret = strcoll(str1, str2);
 
    if (ret > 0) {
        printf("str1 is greater than str2");
    } else if (ret < 0) {
        printf("str1 is lesser than str2");
    } else {
        printf("str1 is equal to str2");
    }
}