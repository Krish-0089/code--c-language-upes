//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter  the rows of the 2d array: ");
    scanf("%d",&n);
    printf("Enter the column of the 2d array: ");
    scanf("%d",&m);

    int arr[n][m];
    int rowSum[n];
    
    
   for(int i = 0; i < n; i++){
    rowSum[i]=0;
        for(int j = 0; j < m; j++) {
            printf("Enter the elements of the 2d array [%d][%d]: ",i+1,j+1);
            scanf("%d", &arr[i][j]);
            rowSum[i] += arr[i][j];
        
        }
    }

    
    for(int i = 0; i < n; i++) {
        printf("%d ", rowSum[i]);
    }
    

    return 0;
}
