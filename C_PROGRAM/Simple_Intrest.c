#include<stdio.h>
#include<conio.h>
int main()
{
    int p,t;  // p is principle amount.t is time in year
    float r;  // r is rate of intrest.
    printf("enter the principle amount\n");
    scanf("%d",&p);
    printf("enter the rate of intrest\n");
    scanf("%f",&r);
    printf("enter the time in year\n");
    scanf("%d",&t);
    float si = p*r*t/100;  // where si is simple intrest
    printf("the simple intrest is : %f", si);
    return 0;
}