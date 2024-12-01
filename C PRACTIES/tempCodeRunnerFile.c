#include<stdio.h>

int main () {
    int arr[10],s,count = 0;
    for(int i=0; i<10; i++){
        printf("Enter element at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter searching number : ");
    scanf("%d",&s);
    
    for(int i=0; i<10; i++){
        if(arr[i]==s){
            printf("found element at %d position\n",i);
            count++;
        }
    
    }
    printf("element found %d times",count);
    return 0;
}