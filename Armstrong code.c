Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
    int n,r,sum=0,a;
    printf("Enter your num : ");
    scanf("%d",&a);
    n=a;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);

        n=n/10;

    }
    
    if(a==sum){
        printf("Armstrong number");

    }
    else{
        printf("Not an Armstrong number");
    }
    return 0;
}
