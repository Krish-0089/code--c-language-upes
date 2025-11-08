//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') { 
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) { 
                printf("First repeating character: %c\n", ch);
             
            }
        }
    }

    printf("No repeating character found.\n");
    return 0;
}
