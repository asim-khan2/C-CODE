#include<stdio.h>

int main () {
    int n, r, c, s = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    c = n;
    while (n > 0) {
        r = n % 10;      // Extracting the last digit
        s = s * 10 + r;  // Reversing the digits
        n = n / 10;      // Removing the last digit
    }
    if (c == s) {
        printf("%d is a palindrome number.\n", c);
    } else {
        printf("%d is not a palindrome number.\n", c);
    }
    return 0;
}
