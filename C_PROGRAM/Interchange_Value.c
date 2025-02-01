#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the first num1\n");
    scanf("%d",&num1);
    printf("enter the first num2\n");
    scanf("%d",&num2);
    printf("Before interchanging the first number is : %d\n",num1);
    printf("Before interchanging the second number is : %d\n",num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
 
    printf("after interchanging the first number is : %d\n", num1);
    printf("after interchanging the second number is : %d", num2);
    return 0;
}