//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int n,n1;
    printf("Enter the size of rows in array: ");
    scanf("%d",&n);
    printf("Enter the size of column in array: ");
    scanf("%d",&n1);
    int abc[n][n1];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("Enter  the elements of array[%d][%d]: ",i+1,j+1);
            scanf("%d",&abc[i][j]);
        }
    }
    printf("\n The elements of two dimmesnional array is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("%d ",abc[i][j]);
        }
    }

    return 0;
}
