#include<stdio.h>

int main () {
    int row;
    printf("Enter row : ");
    scanf("%d",&row);

    for(int i=1; i<=row; i++){
        for(int j=row; j>=i; j--){
            printf(" ");
        }
        for(int k=1; k<=(i*2)-1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}