#include<stdio.h>
#include<string.h>
#include<stdio.h>

int main () {
    char newstr[] = "newstr";
    char oldstr[] = "oldstring";
    strcpy(newstr, oldstr);
    puts(newstr);
    return 0;
}