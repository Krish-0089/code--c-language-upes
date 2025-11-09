/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter [%d] element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 1: Find a candidate using Boyer–Moore Voting Algorithm
    int candidate = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("The majority element is: %d\n", candidate);
    else
        printf("-1\n");

    return 0;
}

