
#include <stdio.h>
void namaste();
void bonjour();
int main() {
   printf("enter f for french & i for indian\n");
   char ch;
   scanf("%c",&ch);
   if(ch == 'i'){
       namaste();
   }
    else if(ch == 'f'){
       bonjour();
   }
   else{
       printf("enter invalid character");
   }
    return 0;
}
void namaste(){
    printf("Namaste");
}
void bonjour(){
    printf("Bonjour");
}