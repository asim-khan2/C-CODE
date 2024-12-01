#include<stdio.h>
int main()
{
    float price[5];
    printf("enter first prince : ");
    scanf("%f",&price[0]);

    printf("enter second prince : ");
    scanf("%f",&price[1]);

    printf("enter third prince : ");
    scanf("%f",&price[2]);

    printf("enter fourth prince : ");
    scanf("%f",&price[3]);

    printf("enter fifth prince : ");
    scanf("%f",&price[4]);

    printf("f0irst price = %f & second price = %f & third price = %f & fourth price = %f & fifth price = %f", price[0], price[1],price[2],price[3],price[4]);
    return 0;
}
