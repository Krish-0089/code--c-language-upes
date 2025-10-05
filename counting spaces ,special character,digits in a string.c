//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
 int main(){
    char a[2000];
    printf("Enter your string:\n");
    fgets(a,sizeof(a),stdin);
int special=0,digit=0,space=0,alphabet=0,i=0;
while (a[i]!='\0'){
    char ch=a[i];
    if(ch>= '0' && ch<= '9' ){
        digit++;
    }
    else if( ch== ' '){
        space++;
    }
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch=='\n'){
      alphabet++;
    }
    else{
        special++;
    }
    i++;
}
printf("Spaces=%d,special characters=%d,digit=%d",space,special,digit);

    return 0;
 }
