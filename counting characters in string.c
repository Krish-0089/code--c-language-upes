//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include<stdio.h>
int main(){
    char a[2000];
    int count=0;
    printf("Enter the string:\n");
    fgets(a,sizeof(a),stdin);

    for(int i=1;a[i]!='\0';i++){   
        count++;
    }
        printf("%d",count);
    return 0;
}
