//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int n, d, product = 1, foundOdd = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    

    while (n > 0) {
        d = n % 10;
        if (d % 2 != 0) {
            product *= d;
            foundOdd = 1;
        }
        n /= 10;
    }
    if (!foundOdd) {
        product = 1;
    }
    printf("Product: %d\n", product);
    return 0;
}
