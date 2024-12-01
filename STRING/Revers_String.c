#include<stdio.h>

int main () {
    char str[100];
    printf("Enter string : ");
    fgets(str, 100, stdin);
    int k=0; 
    int count = 0;
    while(str[k]!='\0'){
        count++;
        k++;
    }
    printf("Befor change string is : ");
    puts(str);
    // printf("The lenght is %d",count-1);
    int temp;
    for(int i=0; i<=count/2; i++){
        temp = str[i];
        str[i] = str[count-i-1];
        str[count-i-1] = temp;
    }
    printf("After reverse changed sring is :");
    puts(str);
    return 0;
}