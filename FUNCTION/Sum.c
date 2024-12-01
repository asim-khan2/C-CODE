#include<stdio.h>

int sum(int x, int y);

int main () {
    int a,b,s;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);

    s = sum(a,b);
    printf("The sum is %d\n",s);
    return 0;
}

int sum(int x, int y){
    return x+y;
}
