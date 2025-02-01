#include<stdio.h>

void storetable(int arr[][10], int n, int m, int number);

int main () {
    int table[2][10],n1,n2;
    printf("Enter number for table 1 : ");
    scanf("%d",&n1);
    printf("Enter number for table 21 : ");
    scanf("%d",&n2);
    storetable(table,0,10,n1);
    storetable(table,1,10,n2);
    for(int i=0; i<10; i++){
        printf("%d\t",table[0][i]);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("%d\t",table[1][i]);
    }
    return 0;   
}
// array of first dimention treat as a pointer 
// array of second dimention treat as a array . so thats by need initilazion of array (arr[][10])
void storetable(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}

