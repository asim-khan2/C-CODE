#include<stdio.h>
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}