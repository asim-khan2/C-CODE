#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = rows; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
