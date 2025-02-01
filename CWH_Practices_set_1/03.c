#include<stdio.h>

int main () {
    int n,fac = 1;
    printf("Enter a numbetr : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d * ",i);
        fac *= i;
    }
    printf("\nThe factorial  is %d ",fac);
    return 0;
}