#include<stdio.h>

int main () {
    int n,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count == 2){
        printf("The number %d is prime",n);
    }
    else{
        printf("The number %d is not prime",n);
    }
    return 0;
}