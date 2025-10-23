//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
int main(){
char s[200];
printf("Enter your string:");
fgets(s,sizeof(s),stdin);
for(int i=1;s[i]!='\0';i++){
    if(s[i]>='a' && s[i] <='z'){
        s[i]=s[i]- ( 'a' - 'A');
    }
}
printf("Updated string:%s",s);
    return 0;
}
