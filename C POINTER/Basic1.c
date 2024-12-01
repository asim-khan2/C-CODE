#include <stdio.h>

int main() {
    int num = 10;   // Declare an integer variable
    int *ptr;       // Declare a pointer variable

    ptr = &num;     // Assign the address of 'num' to the pointer 'ptr'

    printf("Value of num: %d\n", num);      // Output the value of 'num'
    printf("Address of num: %p\n", &num);   // Output the address of 'num'
    printf("Value of ptr: %p\n", ptr);      // Output the value stored in 'ptr', which is the address of 'num'
    printf("Value pointed to by ptr: %d\n", *ptr); // Output the value pointed to by 'ptr'
    printf("address of ptr %p\n",&ptr); // Output the address of ptr
    return 0;
}

