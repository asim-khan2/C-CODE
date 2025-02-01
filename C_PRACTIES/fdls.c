#include <stdio.h>

float divide(int n1, int n2); // Change return type to float

int main() {
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("%d/%d=%.2f", a, b, divide(a, b)); // Format the float output
    return 0;
}

float divide(int n1, int n2) { // Change return type to float
    float c = (float)n1 / n2;
    return c;
}
