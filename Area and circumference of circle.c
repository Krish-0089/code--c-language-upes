Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
#define pi 3.141592
int main(){
int radius;
printf("radius:");
scanf("%d",&radius);
float area=pi*radius*radius;
float circumference=2*pi*radius;
printf("atrea of circle\t%0.2f",area);
printf("\nperimeter of circle\t%0.2f",circumference);
return 0;
}
