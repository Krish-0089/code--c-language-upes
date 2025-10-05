//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main(){
char s[2000];
printf("Enter your string:\n");
fgets(s,sizeof(s),stdin);
strrev(s);
printf("Reversed string:%s\n",s);
return 0;
}
