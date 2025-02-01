#include<stdio.h>

int main () {
    int i,arr[10],sum=0;
    for(i=0; i<10; i++){
        printf("%d index : ", i);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++){
        sum += arr[i];
    }
    float avg = sum/10;
    printf("The sum of array is %d \n",sum);
    printf("the avrage of array is %f \n", avg);
    return 0;
}                   