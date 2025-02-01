#include<stdio.h>
void dowork(int a, int b, int *sum, int *prod, float *avg);
int main()
{
    int a = 3, b = 5;
    int sum, prod;
    float avg;
    dowork(a, b, &sum, &prod, &avg);
    printf("sum is : %d & product is : %d & avrage is : %f\n",sum, prod,avg);
    return 0;
}
void dowork(int a, int b, int *sum, int *prod, float *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}