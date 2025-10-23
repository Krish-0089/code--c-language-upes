//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
int main(){
char s[200];
int count=0;
char ch;
printf("Enter your string:");
fgets(s,sizeof(s),stdin);
printf("Enter the character we want to find:");
scanf("%c",&ch);

for(int i=0;s[i]!='\0';i++){
if(s[i]==ch){
    count++;
}
}
printf("The number of times the character comes is :%d",count);
    return 0;
}
