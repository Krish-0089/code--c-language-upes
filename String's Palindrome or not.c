//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200];
    char str2[200];
    printf("Enter your string: ");
    fgets(str1, sizeof(str1), stdin);
    
    str1[strcspn(str1, "\n")] = '\0';

    strcpy(str2, str1);

    int len = strlen(str2);
    for (int i = 0; i < len / 2; i++) {
        char temp = str2[i];
        str2[i] = str2[len - i - 1];
        str2[len - i - 1] = temp;
    }

   // printf("Reversed string: %s\n", str2);

    if (strcmp(str1, str2) == 0)
        printf("The string is palindrome\n");
    else
        printf("The string is not palindrome\n");

    return 0;
}



