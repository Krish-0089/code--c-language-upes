//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    printf("Enter the binary number:");
    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] == '0')
            arr[i] = '1';
        else if (arr[i] == '1')
            arr[i] = '0';
    }

    printf("The first compliment is:%s", arr);
    return 0;
}
