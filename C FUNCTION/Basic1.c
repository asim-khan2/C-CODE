#include <stdio.h>

int main() {
    int num = 10;
    int result;

    // Using the conditional operator to assign a value to result
    result = (num > 5) ? 100 : 200;

    printf("The value of result is: %d\n", result);

    return 0;
}
