#include<stdio.h>

int main () {
    int n,rem,temp,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        rem = n%10;
        sum = (sum*10)+rem;
        n = n/10; 
    }
    if(temp == sum){
        printf("%d is plindrom number",temp);
    }
    else{
        printf("%d is not plindrom number",temp);
    }
    return 0;
}