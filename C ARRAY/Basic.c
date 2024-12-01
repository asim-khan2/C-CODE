#include<stdio.h>
int main ()
{
    int marks[3];
    printf("enter phy matks :");
    scanf("%d", &marks[0]);

    printf("enter chim matks :");
    scanf("%d", &marks[1]);

    printf("enter math matks :");
    scanf("%d", &marks[2]);

    printf("chim marks = %d & phy marks = %d & maths marks = %d", marks[0], marks[1], marks[2]);
    return 0;
}