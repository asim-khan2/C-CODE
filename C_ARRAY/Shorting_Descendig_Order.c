#include<stdio.h>

int main () {
    int arr[5],temp;
    for(int i=0; i<5; i++){
        printf("%d index : ",i);
        scanf("%d",&arr[i]);

    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}