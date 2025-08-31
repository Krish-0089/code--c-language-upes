Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
#include<math.h>

int main() {
    int total_Seconds;
    printf("total seconds: ");
    scanf("%d",&total_Seconds);
    int hours,minutes,seconds;
    hours = total_Seconds / 3600;
    minutes = (total_Seconds % 3600) / 60;
    seconds = total_Seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
