#include<stdio.h>
int main()
{
    float radius;
    printf("enter radius\n");
    scanf("%f",&radius);
    float area = 3.14*radius*radius;
    printf("area of circle is : %f", area);
    return 0;
}