#include <stdio.h>

int findMax(int *num1, int *num2);

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int max = findMax(&num1, &num2);
    printf("The maximum number between %d and %d is %d\n", num1, num2, max);

    return 0;
}


int findMax(int *num1, int *num2) {
    if (*num1 > *num2)
        return *num1;
    else
        return *num2;
}