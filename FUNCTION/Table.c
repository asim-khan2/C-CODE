#include<stdio.h>

void table(int a);

int main () {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n){
    int table = 1;
    for(int i=1; i<=10; i++){
    printf("%d X %d = %d\n",n,i,n*i);
    }
}