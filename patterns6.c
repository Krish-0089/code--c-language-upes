//Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        
        if (i == 1 || i == 5){
            
            printf("*\n");
        } 
        else if (i == 2 || i == 4) {
            
            for (j = 1; j <= 3; j++) {
                printf("*\n");
            }
        } 
        else if (i == 3) {
            
            for (j = 1; j <= 5; j++) {
                printf("*\n");
            }
        }

        
        if (i != 5) {
            printf("\n");
        }
    }

    return 0;
}
