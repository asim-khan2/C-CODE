#include<stdio.h>
int main ()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("the age is : %d", _age);
    return 0;
}