//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main(){
    int sum=0;
    int i=1;
    int n;
    printf("Enter the valuer of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        sum+=(2*i-1);

       
    }
    printf("The sum of first  odd natural number is=%d\n",sum);
    return 0;}
