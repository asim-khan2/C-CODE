#include<stdio.h>
int main()
{
    int a,b,c,d,e,f=0;
    printf("enter five number\n");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    f = a+b+c+d+e;
    printf("the sum of %d + %d + %d + %d + %d = %d\n", a,b,c,d,e,f);
    float avrage = (float)f/5;
    printf("the avrage of five number is %f\n", avrage);
    return 0;
   
}