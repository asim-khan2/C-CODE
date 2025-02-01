#include<stdio.h>
int main()
{
    char ch;
    printf("enter character\n");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("uppar case\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("lower case\n");
    }else {
        printf("not english lattr\n");
    }

    return 0;
}
