//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>
int main(){
      int number, int factorial;
    printf("Enter a positive integer: "); 
                scanf("%d", &number); 
                if (number < 0) { 
                    printf("Factorial of a negative number doesn't exist.\n"); 
                } 
                else {
                    for (int i = 1; i <= number; ++i) { 
                        factorial *= i; 
                    } 
                    printf("Factorial of %d = %llu\n", number, factorial); 
                }

    return 0;
}

