//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char a[2000];
    printf("Enter your string:\n");
    fgets(a, sizeof(a), stdin);

    int i = 0, vowel = 0, consonant = 0;

    while (a[i] != '\0') {
        char ch = a[i];

        
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel++;
            } else {
                consonant++;
            }
        }

        i++;
    }

    printf("Vowels = %d, Consonants = %d\n", vowel, consonant);
    return 0;
}
