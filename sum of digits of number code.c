//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int i, n, d, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);


    if (n == 0) {
        sum = 0;
    
    }

    while (n > 0) {
        d = n % 10;
        sum += d;
        n /= 10;
    }

    printf("Sum: %d\n", sum);
    

    return 0;
}
