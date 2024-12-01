#include<stdio.h>
#include<math.h>
// aromstrom number 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153
int main () {
    int n,r,c,s=0,digit = 0,temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    c=n;

    // claculate the number of digit
    temp = n;
    while(temp != 0){
        temp = temp/10;
        digit++;
    }
    while(n>0){
        r = n%10;
        s = s + pow(r,digit);
        n = n/10;
    }
    if(c == s){
        printf("%d is aromstrom number \n",c);
    }else{
        printf("%d is not aromstrom number \n",c);
    }
    return 0;
}