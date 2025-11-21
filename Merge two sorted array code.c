//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include<stdio.h>
int main(){
    int m,n,temp;
    printf("Enter thr size of first array:");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the [%d] elements in the first array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter thr size of second array:");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the [%d] elements in the second  array:\n",m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
         if(arr1[j]>arr1[j+1]){
             temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
         }
        }
    }
        for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
         if(arr2[j]>arr2[j+1]){
             temp=arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
         }
        }
    }
     int merged[n + m];

    for(int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    for(int j = 0; j < m; j++) {
        merged[n + j] = arr2[j];
    }

    for(int i=0;i<n+m-1;i++){
        for(int j=0;j<n+m-i-1;j++){
         if(merged[j]>merged[j+1]){
             temp=merged[j];
            merged[j]=merged[j+1];
            merged[j+1]=temp;
         }
        }
    }
    printf("Merged array: ");
    for(int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    return 0;
}
