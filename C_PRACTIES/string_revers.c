#include<stdio.h>

int main () {
    char str[100];
    printf("Enter string : ");
    fgets(str,100,stdin);
    printf("Before reverse string");
    puts(str);
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    printf("%d size of string",count);
    for(int i=0; i<=(count-1)/2; i++){
        int c = str[i];
        str[i] = str[count-i-1];
        str[count-i-1] = c;
        
    }
    puts(str);
    
    
    return 0;
}