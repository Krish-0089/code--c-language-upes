//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include<stdio.h>

int main() {
    int n, m;
    
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    int a[n];
    
    printf("Enter the elements of first array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &m);
    int b[m];

    printf("Enter the elements of second array: \n");
    for(int j = 0; j < m; j++) {
        scanf("%d", &b[j]);
    }

    
    int merged[n + m];

    for(int i = 0; i < n; i++) {
        merged[i] = a[i];
    }

    for(int j = 0; j < m; j++) {
        merged[n + j] = b[j];
    }

    
    printf("Merged array: ");
    for(int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
