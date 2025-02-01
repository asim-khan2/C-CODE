#include<stdio.h>

int main () {
    int n,f=1;
    printf("Ener Number for factorial : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        f *= i;
    }
    printf("The Factorial is %d",f);
    return 0;
}