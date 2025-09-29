//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
 int main(){
  int n,m,i,j,sum=0;
  printf("Enter the rows of array:\n");
  scanf("%d",&n);
    printf("Enter the column of array:\n");
      scanf("%d",&m);
  int arr[n][m];
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("Enter the elements of array[%d][%d]:",i+1,j+1); 
        scanf("%d",&arr[i][j]);
    }
  }

  for(i=0;i<n;i++){
    sum=sum+arr[i][i];
  }
  printf("The sum of diagonal elements are:%d",sum);

    return 0;
 }
