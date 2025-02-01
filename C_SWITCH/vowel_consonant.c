#include<stdio.h>

int main () {
    char ch;
    printf("Enter charcater : ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf(" %c is a vowel\n",ch);
        break;
    
    default:
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("The character %c is consonant\n",ch);
    }
    else{
        printf("invalid input\nplease enter valid input\n");
    }
        break;
    }
    return 0;
}