#include <stdio.h>
#include <string.h>
 
void main()
{
    char str[] = "Firstbitsolution";
     
    printf("Original String: %s\n", str);
    char* result= strnset(str, '#', 5);
     
    printf("Modified String: %s\n", result);
     
}

