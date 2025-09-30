//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int i, j, temp, n, value;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n + 1];  

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value you want to insert in the sorted array: ");
    scanf("%d", &value);

    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    for(i = n - 1; i >= 0 && arr[i] > value; i--) {
        arr[i + 1] = arr[i];  
    }
    arr[i + 1] = value;
    n++;  

    printf("Resultant array:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}
