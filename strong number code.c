//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int num, og, remainder, sum = 0, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    og= num;

    while (num > 0) {
        remainder = num % 10;
        
    
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == og)
        printf("%d is a Strong number.\n", og);
    else
        printf("%d is not a Strong number.\n", og);

    return 0;
}
