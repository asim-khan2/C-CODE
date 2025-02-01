#include<stdio.h>
#include<math.h>

// Armstrong number example: 153 = 1^3 + 5^3 + 3^3 = 153
int main () {
    int n, r, c, s = 0, digit = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    c = n;

    // Calculate the number of digits
    temp = n;
    while (temp > 0) {
        temp = temp / 10;
        digit++;
    }

    // Calculate the sum of the digits each raised to the power of the number of digits
    temp = n;
    while (temp > 0) {
        r = temp % 10;
        s = s + pow(r, digit);
        temp = temp / 10;
    }

    // Check if the original number is equal to the calculated sum
    if (c == s) {
        printf("%d is an Armstrong number\n", c);
    } else {
        printf("%d is not an Armstrong number\n", c);
    }
    return 0;
}
