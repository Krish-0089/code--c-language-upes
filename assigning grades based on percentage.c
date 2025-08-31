Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter your marks : ");
    scanf("%d",&a);
    if(a>90){
        printf("Grade A");
    }
    else if(a>80 && a<90){
    printf("Grade B");
}
else if(a>70 && a<80){
    printf("Grade C");
}
else if(a>60 && a<70){
    printf("Grade D");
}
else{
printf("Grade F");
}
return 0;
}
