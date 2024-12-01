#include<stdio.h>
int countOdd(int arr[], int n);
int main () {
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter element at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Odd number is\t");
    printf("\ntotal odd number is %d\n",countOdd(arr, 10));
    return 0;
}

int countOdd(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            printf("%d\t",arr[i]);
            count++;
        }
    }
    return count;
}