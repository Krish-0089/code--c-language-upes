//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/     
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i, j, maxLen = 0, len;
    printf("Enter your string:");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';

    i = 0;
    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        wor
