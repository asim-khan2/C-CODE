#include<stdio.h>
#include<math.h>
int main()
{
    int a; 
    printf("enter number a : ");
    scanf("%d",&a);
    a = a%2 == 0;
    printf("%d",a);
    return 0;
}