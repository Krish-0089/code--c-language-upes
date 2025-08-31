9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h> 

#define P principal
#define R rate
#define T time
#define S simple_Interest
#define C compound_Interest

int main() {
    float P, R, T;
    printf("P: ");
    scanf("%f", &P);
    printf("R: ");
    scanf("%f", &R);
    printf("T: ");
    scanf("%f", &T);

    float S, C;  
    S = (P * R * T) / 100;
    C = P * (pow((1 + R / 100), T)) - P;  
    printf("Simple Interest (S) = %.2f\n", S); 
    printf("Compound Interest (C) = %.2f\n", C);

    return 0;
}
