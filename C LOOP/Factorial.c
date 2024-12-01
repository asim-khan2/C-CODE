#include<stdio.h>

int main () {
    int n,fac=1;

    printf("Enter number : ");
    scanf("%d",&n);

    if(n>0){
        for(int i=1; i<=n; i++){
        fac *= i;
        }
        printf("The factorial of %d  is %d",n,fac);
    }
    else if(n==0){
        printf("The factorial of 0 is 1\n");
    }
    else{
        printf("Enter positive integer number\n");
    }
    return 0;
}