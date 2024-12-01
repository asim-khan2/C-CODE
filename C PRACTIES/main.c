#include<stdio.h>
int lenth(char str[]);
int main () {
    char str[100];
    printf("Enter string : ");
    gets(str);
    int l = lenth(str);
    
    printf("string length is %d\n",l);
    return 0;
}
int lenth(char str[]){
    int i = 0;
    int l = 0;
    while(str[i] != '\0'){
        l++;
        i++;
    }
    return l;
}
