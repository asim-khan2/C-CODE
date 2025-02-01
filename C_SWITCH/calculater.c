#include<stdio.h>

int main () {
    int a,b, choice;
    printf("Enter choice\n");
    printf("1. Addition\n2. substration\n3. Multiplication\n4. Dividion\n");
    scanf("%d",&choice);
    if(choice > 4){
        printf("Please Enter range\n");
    }
    else{
        printf("Two integer number \n");
        scanf("%d %d",&a,&b);
    }
    switch (choice)
    {
    case 1:
        printf("%d + %d = %d", a, b, (a+b));
        break;
    case 2:
        printf("%d - %d = %d", a, b, (a-b));
        break;
    case 3:
        printf("%d X %d = %d", a, b, (a*b));
        break;
    case 4:
        if(b != 0){
        printf("%d / %d = %d", a, b, (a/b));
        }
        else{
            printf("Number can't by divided 0\n");
        }
        break;
    }
    return 0;
}