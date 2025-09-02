//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>
int main()
{
    char num;
    printf("Enter your num : ");
    scanf("%c", &num );
    int a, b;
    printf("The value of a is: ");
    scanf("%d",&a );
    printf("The value of b is :");
    scanf("%d",&b );
    char sum,sub,mul,div,mod;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    switch (num)
    {
    case '+':

        

        printf("Sum :%d", sum);
        break;

    case '-':

        
        
        printf(" sub :%d", sub);
        break;

    case '*':

        
        
        printf(" Mul :%d", mul);
        break;

    case '/':

        
        
        printf("Div :%d", div);
        break;

    default:

        
        
        printf("Mod : %d", mod);
    }
    return 0;
}

  
