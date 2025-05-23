#include <stdio.h>
#include <string.h>
 
void main()
{
    // initializing string
    char str[] = "Firstbitsolution";
 
    // character to be searched
    char chr = 't';
 
    // Storing pointer returned by
    char* ptr = strrchr(str, chr);
 
    // getting the position of the character
    if (ptr!= NULL) {
        printf("Last occurrence of %c in %s is at index %d",chr, str, ptr - str);
    }
    // condition for character not present
    else {
        printf("%c is not present in %s ", chr, str);
}
}