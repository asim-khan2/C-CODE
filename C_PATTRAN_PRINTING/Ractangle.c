#include<stdio.h>
int main()
{
    int row, colum;
    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter colum : ");
    scanf("%d",&colum);
    for(int i=1; i<=row;i++){
        for(int j=1; j<=colum; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}