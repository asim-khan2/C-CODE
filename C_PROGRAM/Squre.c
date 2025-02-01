#include<stdio.h> 
#include<math.h>
int main()
{  
    int a,b,c;
    printf("enter number a\n");
    scanf("%d",&a); 
    b = 2;
    c = pow(a,b);
   printf("the square of %d is %d", a,c);
    return 0;
}
