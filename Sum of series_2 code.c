//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/ 
#include <stdio.h>

int main() {
    int n;
    printf("Enter the range of series:");
    scanf("%d", &n);

    float sum = 0.0;

    if (n >= 1)
        sum += 1.0;

    for (int i = 2; i <= n; i++) {
        float num = 2.0 * i - 1; 
        float den = 2.0 * i;       
        sum += num / den;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
