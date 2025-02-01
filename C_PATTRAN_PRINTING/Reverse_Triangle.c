#include<stdio.h>

int main() {
    int row;
    printf("Enter Row: ");
    scanf("%d", &row); // Taking input from the user for the number of rows
    
    // Outer loop for iterating through each row
    for (int i = 1; i <= row; i++) {
        // Inner loop for printing '*' in each row
        for (int j = row - i + 1; j >= 1; j--) {
            printf("*");
        }
        printf("\n"); // Moving to the next line after printing each row
    }
    
    return 0;
}
