#include<stdio.h>

int main () {
    int n,c,r,arm=0;
    printf("Ente number : ");
    scanf("%d",&n);
    c = n;
    while (n>0)
    {
        r = n%10;
        arm = (r*r*r)+arm;
        n = n/10;

    }
    if(c==arm){
        printf("%d number is Armstrom\n",c);
    }
    else{
        printf("%d number is not Armstrom\n",c);

    }
    
    return 0;
}