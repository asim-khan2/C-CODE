#include<stdio.h>
void table(int n);

int main ()
{
      int n;
    printf("enter number\n");
    scanf("%d",&n);
    table(n); // argument / actual parameter 
    return 0;
}
void table(int n){
  
    for(int i=1; i<=10; i++){ // parameter /formal perameter
        int table = n*i;
        printf("%d X %d = %d\n",n,i,table);
    }
}