//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, power;
     printf("Enter youur number:");
    scanf("%d", &num);

    int temp = num;

    last = temp % 10;  
    while (temp >= 10) {
        temp /= 10;
    }
    first = temp;


    digits = (int)log10(num);

    
    if (digits == 0) {
        printf("%d", num);
        return 0;
    }
    int middle = num % (int)pow(10, digits);  
    middle /= 10;
    int result = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Swapping first and last digit :%d", result);

    return 0;
}
