#include<stdio.h>

int main () {
    int months;
    printf("Enter (1-12) number\n");
    scanf("%d",&months);
    switch(months){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("Number of days 31\n");
        break;
        case 2:
        printf("number of days 28\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("number of days 30\n");
        default:
        printf("Invalid number");
        break;
    }
    return 0;
}