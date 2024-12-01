#include<stdio.h>
// product of digits 

int main () {
    int n,reminder,sum = 0,c;
    printf("Enter number : ");
    scanf("%d",&n);
    c=n;
    while(n!=0){
        reminder = n%10;
        sum += reminder;
        n = n/10;
    }
    printf("product of %d digit is %d",c,sum);
    return 0;
}