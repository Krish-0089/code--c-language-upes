//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main(){
    int n,i;
   printf("Enter the size of array: ");
   scanf("%d",&n);
   int arr[n];
   int positive=0,negative=0,zero=0;
   for(i=0;i<n;i++){
    printf("Enter the element of array: ",i+1);
    scanf("%d",&arr[i]);

   }
   for(i=0;i<n;i++){
    if(arr[i]>0){
        positive++;
    }
    else if(arr[i]<0){
        negative++;
    }
    else{
        zero++;
    }
   }
   printf("Positive numbers: %d\n",positive);
   printf("Negative numbers: %d\n",negative);
   printf("Zeros: %d",zero);
    return 0;
}
