#include<stdio.h>
#include<string.h>
int main () {
    char newstr[] = "newstring";
    char oldstr[] = "oldstring";
    strcpy(newstr,oldstr);
    puts(newstr);
    return 0;
}