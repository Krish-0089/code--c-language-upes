//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int n,n1,sum=0;
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
    
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
        sum=sum+abc[i][j];
        }
    }
    printf("The sum of elements od 2d array is:%d",sum);
    return 0;
}
