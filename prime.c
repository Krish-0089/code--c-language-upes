//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main() {
    int n, Prime = 1; 

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The number is not prime\n");
        return 0;
    }

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            Prime = 0; 
            break;
        }
    }

    if (Prime) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}
