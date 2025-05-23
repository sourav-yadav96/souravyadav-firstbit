#include <stdio.h>
#include<string.h>

void main() {
    char str[100], ch='a';
    int i, found = 0;

    // Scan the string from the user
    printf("Enter a string: ");
    scanf("%s", str);  // Read the entire line until newline
for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
        	str[i]='$';
        }
    }
printf("%s",str);
}