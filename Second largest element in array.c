//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
 int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int arr[n],i,max,second;
for(i=0;i<n;i++){
  printf("Enter the [%d] element of array:",i+1);
  scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<n;i++){
if(arr[i]>max){
 second=max;
  max=arr[i];
}
else if(arr[i]>second && arr[i]!=max){
  second=arr[i];
}
}
printf("Second largest:%d",second);
return 0;

  return 0;
}
