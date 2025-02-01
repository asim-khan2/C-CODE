#include<stdio.h>
// product of digits 

int main () {
    int n,reminder,product = 1,c;
    printf("Enter number : ");
    scanf("%d",&n);
    c=n;
    while(n!=0){
        reminder = n%10;
        product *= reminder;
        n = n/10;
    }
    printf("product of %d digit is %d",c,product);
    return 0;
}