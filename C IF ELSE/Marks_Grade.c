#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks \n");
    scanf("%d",&marks);
     if(marks < 30){
        printf("FAIL");
     }
     else if (marks >= 30 && marks <=70) {
        printf("B\n");
     }
     else if (marks > 70 && marks <= 90){
     printf("A+\n");
     }
    else {
        printf("A++\n");
    }
    return 0;     
}