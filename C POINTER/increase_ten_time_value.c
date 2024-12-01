#include<stdio.h>

void ten_time_value(int *value){
    *value *= 10;
}

int main () {
    int value = 8;
    ten_time_value(&value);
    printf("the value increase ten time %d\n",value);
    return 0;
}