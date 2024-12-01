#include<stdio.h>

int countlength(char arr[], char n);

int main () {
    char name[100],a;
    printf("Enter string : ");
    fgets(name, 100, stdin);
    printf("Enter searching character in a string : ");
    scanf("%c",&a);
    printf("found character : %d times\n", countlength(name,a));
    return 0;
}

int countlength(char arr[],char n){
    int count = 0; 
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i]==n){
            printf("character found %d position\n",i+1);
            count++;
        }
    }
    return count; 
}
