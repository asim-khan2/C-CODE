// convert year in a minutes and hours, day, months,second

#include<stdio.h>

int main () {
    int year,n;
    printf("Enter year : ");
    scanf("%d",&year);
    printf("1 for convert minutes\n2 for hours\n3 for day\n4 for months\n5 for second\n");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("in a %d year %d minutes ",year,year*525600);
        break;
        case 2:
        printf("in a %dyear %d hours ",year,year*8760);
        break;
        case 3:
        printf("in a %d year %d days",year,year*365);
        break;
        case 4:
        printf("in a %d year %d months",year,year*12);
        break;
        case 5:
        printf("in a %d year %d seconds",year,year*31536000);
        break;

        default:
            printf("Please enter valid number\n");
            break;
    }
    return 0;
}