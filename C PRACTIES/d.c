#include<stdio.h>

void swap(int *a, int *b);

int main () {
    int a=10, b=20;
    printf("Before swapping, number a is %d\n", a);
    printf("Before swapping, number b is %d\n", b);
    swap(&a, &b);
    printf("After swapping, number a is %d\n", a);
    printf("After swapping, number b is %d\n", b);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
