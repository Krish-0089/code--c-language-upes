//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include<stdio.h>
int main() {
    int n, m;
    printf("Enter the value of the rows in the array: ");
    scanf("%d", &n);
    printf("Enter the value of the columns in the array: ");
    scanf("%d", &m);

    int arr[n][m];
    int ab[m][n]; 

    int i, j;
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            ab[j][i] = arr[i][j];
        }
    }

    
    printf("Transposed matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", ab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
