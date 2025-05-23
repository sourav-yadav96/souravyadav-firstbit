#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    // Declaring three strings 
    char s1[] = "Firstbitsolution"; 
    char s2[] = "dam"; 
    char s3[] = "sbi"; 
    char* r, *t; 
  
    // Checks for matching character 
    // no match found 
    r = strpbrk(s1, s2);  
    if (r != 0) 
        printf("First matching character: %c\n", *r); 
    else
        printf("Character not found"); 
  
    // Checks for matching character 
    // first match found at "e" 
    t = strpbrk(s1, s3); 
    if (t != 0) 
        printf("\nFirst matching character: %c\n", *t); 
    else
        printf("Character not found"); 
} 