#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "sourav";
    char str2[] = "Yadav";
    char str3[] = "sourav";

    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str2, str3);
    int result3 = strcmp(str1, str3);

    printf("Comparison of str1 and str2 is: %d\n", result1);
    printf("Comparison of str2 and str3 is: %d\n", result2);
    printf("Comparison of str1 and str1 is: %d\n", result3);
}