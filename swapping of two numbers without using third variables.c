Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>
int main(){
    int a,b;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("a=%d\t",a);
    printf("b=%d",b);

    return 0;
}
