//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], temp[100];
    printf("Enter the string:");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name)-1] == '\n') name[strlen(name)-1] = '\0';

    int len = strlen(name), start = 0, count = 0;
    for (int i = 0; i <= len; i++) {
        if (name[i] == ' ' || name[i] == '\0') {
            if (name[i] != '\0') printf("%c.", name[start]);
            start = i + 1;
            count++;
        }
        if (name[i] == '\0' && count > 1) {
            printf(" %s", name + start);
        }
    }
    printf("\n");
    return 0;
}
