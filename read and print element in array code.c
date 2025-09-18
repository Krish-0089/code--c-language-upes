//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include<stdio.h>
int main(){
   int arr[2000];
   int i,j,n;
   printf("Initialise the size of array of want to use in the current array: ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("Enter the element of array:",i+1);
    scanf("%d",&arr[i]);
   }
   for(j=0;j<n;j++){
    printf("The elements of array: %d\n",arr[j]);
   }
    return 0;
}
