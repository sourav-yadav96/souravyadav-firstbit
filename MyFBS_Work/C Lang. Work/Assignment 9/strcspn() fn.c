#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
  
    int size; 
  
    // initializing strings 
    char str1[] = "firstbitsolution"; 
    char str2[] = "stb"; 
  
    // using strcspn() to calculate initial chars 
    // before 1st matching chars. 
    // returns 3 
    size = strcspn(str1, str2); 
  
    printf("The unmatched characters before first matched character :  %d\n", size); 
} 

