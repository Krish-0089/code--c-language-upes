//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main() {
    int n, target;
    int low, high, mid;
    int flag = 0; 
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100],i,j,temp; 
    
    for (i = 0; i < n; i++) {
         printf("Enter the [%d] elements:",i+1);
        scanf("%d", &arr[i]);
    }
   for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
    }
   }
   }
   printf("Sorted array:");
   for(i=0;i<n;i++){
   printf("%d ",arr[i]);
   }
    printf("\nEnter element to search: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;

    
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target) {
            flag = 1; 
            break;
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    
    if (flag == 1)
        printf("Element found at index %d\n", mid);
    else
        printf("-1\n");

    return 0;
}
