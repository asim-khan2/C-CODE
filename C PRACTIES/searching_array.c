#include<stdio.h>

int main () {
    char str[100],arr[100];
    printf("Enter string\n");
    fgets(str,100,stdin);
    printf("Enter substring\n"); 
    fgets(arr,100,stdin);
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    int c = 0;
    for(int j=0; j<=count-1; j++){
        for(int k=0; arr[k]!='\0'; k++){

                if(str[j]==arr[k]){
                printf("The position is %d\n",j);
                c++;
                }   
            }
    }
    return 0;
}