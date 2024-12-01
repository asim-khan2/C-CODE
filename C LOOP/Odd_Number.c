#include <stdio.h>
int main()
{
    int limit;
    printf("enter limit :\n");
    scanf("%d",&limit);
    for(int i=1; i<=limit; i++){
        if(i %2 != 0){
            printf("%d\n",i);
        }
    }
    return 0;
}
