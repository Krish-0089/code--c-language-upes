//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int search = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Found at index %d\n", i);
            search = 0;
            break;
        }
        else{
            search=1;
        }
    }

    if (search){
        printf("-1\n");
    }

    return 0;
}
