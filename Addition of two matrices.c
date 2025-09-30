//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main(){
    int n,n1,m,m1;
    printf("Enter the size of rows of the matrices: ");
    scanf("%d",&n);
    printf("Enter the size of column of the matrices: ");
    scanf("%d",&n1);
    int matrix1[n][n1];
   int matrix2[n][n1];
    int sum[n][n1];

    int i,j;
    if(n!=n1){
        printf("only valid for square matrices");
        return 1;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("Enter  the elements of matrix1[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
        }

      for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("Enter  the elements of matrix2[%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
        } 

        for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        }
        
        printf("The resultant matrix after adding two matrices are:\n");
        for(i=0;i<n;i++){
        for(j=0;j<n1;j++){
            printf("%d\t",sum[i][j]);
            
        }
        printf("\n");
        }  
    return 0;
}
