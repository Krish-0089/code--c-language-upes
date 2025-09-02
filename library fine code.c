//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
    int days;
    int fine=0;
    printf("Number of days overdue : ");
    scanf("%d",&days);
    
    if(days<=4){
        fine=days*2;
        printf("Fine : %d",fine);
    }
    else if(days<=13){
        fine=(4*2)+(days-4)*6;
        printf("Fine : %d",fine);
    }
    else if(days<=30){
        fine=(4*2)+(9*6)+(days-13)*14;
        printf("Fine :%d ",fine);
    }
    else {
        printf("Membership cancelled");
    }
    return 0;
}
