//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your string:");
    fgets(name, sizeof(name), stdin);
    if (name[strlen(name)-1] == '\n') name[strlen(name)-1] = '\0';

    int len = strlen(name);
    for (int i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ') printf("%c.", name[i]);
        if (name[i] == ' ' && i+1 < len && name[i+1] != ' ') printf("%c.", name[i+1]);
    }
    printf("\n");
    return 0;
}
