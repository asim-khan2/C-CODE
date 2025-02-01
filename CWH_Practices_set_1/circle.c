#include<stdio.h>

int main () {
    int a,b, c;
    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("Enter number c : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf(" %d is greatest number ", a);
    }else if(b>a && b>c){
        printf("%d is greatesr number\n", b);
    }else{
        printf("%d is greatesr number\n", c);
        
    }
    return 0;
}