//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of sorted array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (result != -1)
        printf("Ceil of %d is at index: %d\n", x, result);
    else
        printf("Ceil of %d does not exist. Output: -1\n", x);

    return 0;
}
