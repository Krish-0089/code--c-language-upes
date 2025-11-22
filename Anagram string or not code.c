//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include<stdio.h>
#include<string.h>
 int main(){
    char s[200],t[200];
    printf("Enter the frist string:");
    fgets(s,sizeof(s),stdin);
    int len1=strlen(s);
    if(len1>0 && s[len1-1]=='\n')   s[len1-1]='\0';
    printf("Enter the second string:");
    fgets(t,sizeof(t),stdin);
    int len2=strlen(t);
    if(len2>0 && t[len2-1]=='\n')  t[len2-1] ='\0';
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }
}
    for(int i=0;t[i]!='\0';i++){
        if(t[i]>='A' && t[i]<='Z'){
        t[i]=t[i]+32;
    }
}
len1=strlen(s);
len2=strlen(t);
    if(len1!=len2){
    printf("Not Anagram");
    return 1;
}
   for(int i=0;i<len1-1;i++){
    for(int j=i+1;j<len1;j++){
    if(s[i]>s[j]){
      int temp=s[i];
      s[i]=s[j];
      s[j]=temp;
    }
    }
}

    for(int i=0;i<len2-1;i++){
    for(int j=i+1;j<len2;j++){
    if(t[i]>t[j]){
      int temp=t[i];
      t[i]=t[j];
      t[j]=temp;
    }
    }
}
    if(strcmp(s, t) == 0){
        printf("Anagram");
    }
    else{
        printf("Not anagram");
    }
return 0;
}
    
