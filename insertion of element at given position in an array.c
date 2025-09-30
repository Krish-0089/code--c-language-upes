//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>
int main(){
    int i,position,n,value;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
    printf("Enter the element of array[%d]:",i+1);
    scanf("%d",&arr[i]);
   }
   printf("Enter the position where you wish to insert the array:\n");
   scanf("%d",&position);

   printf("enter the value to insert:\n");
   scanf("%d",&value);
   for(i=n;i>position-1;i--){
    arr[i]=arr[i-1];
    

   }
      arr[position]=value;
   printf("Resultant array:\n");
   for(i=0;i<=n;i++){
    printf("%d\t",arr[i]);
   }
    return 0;
   
   }
