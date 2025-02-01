#include<stdio.h>
int main()
{
    float price[3];
    printf("enter  1 price : ");
    scanf("%f",&price[0]);
    printf("enter  2 price : ");
    scanf("%f",&price[1]);
    printf("enter  3 price : ");
    scanf("%f",&price[2]);

    printf(" 1 total price is %f\n", price[0]+(0.18*price[0]));
    printf(" 2 total price is %f\n", price[1]+(0.18*price[1]));
    printf(" 3 total price is %f\n", price[2]+(0.18*price[2]));

    return 0;
}