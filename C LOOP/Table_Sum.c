#include<stdio.h>

int main () {
    int sum=0,table=1,n;
    printf("enter a number :\n");
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        table = n*i;
        sum += table;
    }
    printf("%d",sum);
    return 0;
}