//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the row of matrix -> 'a':");
    scanf("%d",&r);
    printf("Enter the column of matrix:");
    scanf("%d",&c);

    int a[r][c];
    printf("Enter the [%d][%d] of matrix:\n",r,c);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (int s = 0; s < r + c - 1; s++) {

        int temp[100], t = 0;
        for (int i = 0; i < r; i++) {
            int j = s - i;
            if (j >= 0 && j < c) {
                temp[t++] = a[i][j];
            }
        }
        if (s % 2 == 0) {
            
            for (int i = t - 1; i >= 0; i--) {
                printf("%d ", temp[i]);
            }
        } else {

            for (int i = 0; i < t; i++) {
                printf("%d ", temp[i]);
            }
        }
    }

    return 0;
}
