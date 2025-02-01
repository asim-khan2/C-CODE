#include<stdio.h>

int main () {
    int arr[10],s,count=0;
    
    for(int i=0; i<10; i++){
        printf("%d index : ",i);
        scanf("%d",&arr[i]);
    }

    printf("enter number to be searched\n");
    scanf("%d",&s);

    for(int i=0; i<10; i++){
        if(s==arr[i]){
            printf("the element found at location %d\n",i+1);
            count++;
        }
    }
    if(count==0){
        printf("element not found\n");
    }
    else{
        printf("element found %d times",count);
    }
    return 0;
}