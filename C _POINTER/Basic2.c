#include<stdio.h>
int main ()
{
    int age = 22;
    int *ptr = &age;
    printf("%p\n",&age); // address of variable
    printf("%p\n",ptr); // pointer srotre address of variable
    printf("%u",&ptr);// address of pointer %u use for unsinghed int
    return 0;
}