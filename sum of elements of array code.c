//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3
*/
#include<stdio.h>
int main(){
    int i,j,n,sum=0;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
    printf("Enter the element of array: ");
    scanf("%d",&arr[i]);
   }
   for(j=0;j<n;j++){
    sum=sum+arr[j];
   }
   printf("The sum of elements of array: %d",sum);
}
*/
