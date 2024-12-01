#include<stdio.h>

void printNumber(int array[], int n);

int main () {
    int array[5] = {1, 2, 3, 4,5};
 printNumber( array, 5);

    return 0;
}

void printNumber(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
}


// SECOND TYPE

// #include<stdio.h>

// void printNumber(int *array, int n);

// int main () {
//     int array[5] = {1, 2, 3, 4,5};
//     printNumber( array, 5);

//     return 0;
// }

// void printNumber(int *array, int n){
//     for(int i=0; i<n; i++){
//         printf("%d \t",array[i]);
//     }
//     printf("\n");
// }