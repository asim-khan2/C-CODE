#include<stdio.h>
float square(float sid);
float circile(float rad);
float rectagle(float a, float b);
int  main ()
{
    float a = 2.0;
    float b = 3.0;
    printf("area of ractangle is %f", rectangle(a, b));
    return 0;
}
float square(float sid){
    return sid*sid;
}
float circile(float rad){
    return 3.14 * rad * rad;
}
float rectangle(float a, float b){
    return a * b;
}