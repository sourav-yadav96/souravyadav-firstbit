#include <stdio.h>
#include<string.h>

void main() {
    char str[100];

    // Scan the string from the user
    printf("Enter a string: ");
    scanf("%s", str);  // Read the entire line until newline
    int length = strlen(str);
    if (length > 1) {
        // Swap the first and last characters
        char temp = str[0];
        str[0] = str[length - 1];
        str[length - 1] = temp;
    }
    printf("%s",str);
}