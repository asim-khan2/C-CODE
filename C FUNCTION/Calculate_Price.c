#include<stdio.h>
void calculateprice(float value);
int main ()
{
    float value = 100.0;
    calculateprice(value);

    return 0;
}
void calculateprice(float value){
    value =value + (18*value/100);
    printf("the final value is %f",value);
}