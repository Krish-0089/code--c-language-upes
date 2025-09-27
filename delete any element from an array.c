//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/#include<stdio.h>
int main(){
    int n,delete;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the index of element you want to delete in the array: ");
    scanf("%d",&delete);
    if(delete<0 || delete>=n){
        printf("Invalid expression\n");
        return 1;
    }
    else{
    for(i=delete;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}
    printf("The updated array after deletion is:\n");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
        
    }
    return 0;
}
