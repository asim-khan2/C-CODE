#include<stdio.h>

int main () {
    int a, b, c;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Enter number c: ");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            printf("%d is the greatest number\n", a);
        }
        else {
            printf("%d is the greatest number\n", c);
        }
    }
    else {
        if (b > c) {
            printf("%d is the greatest number\n", b);
        }
        else {
            printf("%d is the greatest number\n", c);
        }
    }
    return 0;
}
