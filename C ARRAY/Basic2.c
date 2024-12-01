#include<stdio.h>
int main()
{
    char ch[3];
    printf("enter 1 char : ");
    scanf(" %c", &ch[0]);

    printf("enter 2 char : ");
    scanf(" %c", &ch[1]);

    printf("enter 3 char : ");
    scanf(" %c", &ch[2]);

    printf(" 1 char = %c & 2 char = %c & 3 char = %c", ch[0], ch[1], ch[2]);
    return 0;
}
