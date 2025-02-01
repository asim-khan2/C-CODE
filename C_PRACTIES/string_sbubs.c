#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100], subString[100];
    int mainLength, subLength, position = -1;

    printf("Enter the main string: ");
    fgets(mainString, sizeof(mainString), stdin);

    printf("Enter the substring to search for: ");
    fgets(subString, sizeof(subString), stdin);

    // Remove newline characters from input strings
    mainString[strcspn(mainString, "\n")] = '\0';
    subString[strcspn(subString, "\n")] = '\0';

    mainLength = strlen(mainString);
    subLength = strlen(subString);

    for (int i = 0; i <= mainLength - subLength; i++) {
        int j;
        for (j = 0; j < subLength; j++) {
            if (mainString[i + j] != subString[j]) {
                break;
            }
        }
        if (j == subLength) {
            position = i; // If substring is found, store the position
            break;
        }
    }

    if (position != -1) {
        printf("Substring found at position %d\n", position);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}

