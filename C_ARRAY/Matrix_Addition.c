//  matrix of addition 

#include<stdio.h>

int main () {
    int m1[3][3], m2[3][3], m3[3][3];
    // input first matrix
    printf("Enter elements of first matrix:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d %d index of first matrix : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }

    //input second matrix
    printf("Enter elements of second matrix:\n");
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d %d index of second matrix : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    // opration for addition
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            m3[i][j] = 0;
            
            m3[i][j] += m1[i][j] + m2[i][j];
            
        }
        
    }

    // pritn output 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}