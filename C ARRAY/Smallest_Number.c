#include<stdio.h>

int main () {
    int arr[10],s;
    for(int i=0; i<10; i++){
        printf("%d index : ",i);
        scanf("%d",&arr[i]);
    }
    s=arr[0];
    for(int i=0; i<10; i++){
        if(arr[i]<s){
            s = arr[i];
        }
    }
        printf("the smallest number is %d",s);
    return 0;
}