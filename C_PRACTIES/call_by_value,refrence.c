#include<stdio.h>

int swap(int a, int b);

int main () {
    int a=1, b=4;
    printf("Before swapping the number \n");
    printf("a = %d\nb = %d",a,b);
    printf("After swapping the number \n",swap(a,b));
    

    return 0;
}
int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d",a,b);
    
}