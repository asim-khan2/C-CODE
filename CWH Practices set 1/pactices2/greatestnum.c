#include<stdio.h>

int main () {
    int a,b,c;
    printf("Enter number a :" );
    scanf("%d",&a);
    printf("Enter number b :" );
    scanf("%d",&b);
    printf("Enter number c :" );
    scanf("%d",&c);
    if(a>b && a>c){
        printf("The greatest number is %d",a);
    }else if(b>a && b>c){
        printf("The greatest number is %d",b);
    }
    else{
        printf("The greatest number is %d",c);
    }
    return 0;
}