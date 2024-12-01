#include<stdio.h>
//revers array
void reverse(int arr[], int n);
void printarr(int arr[], int n);

int main () {
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter element at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    reverse(arr, 10);
    printarr(arr, 10);
    return 0;
}

void printarr(int arr[], int n)
{
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}