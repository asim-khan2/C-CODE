#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int number, guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1;// genrates random number(1-100)
    // printf("the random number is %d\n",number);
    // keep runing loop until the number is gussed
    do{
        printf("Gusses the number between (1-100)\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if(guess<number){
            printf("Higher number pleasee\n");
        }
        else{
            printf("You guesses it in %d attampts\n",nguesses);
        }
        nguesses++;

    }while(guess!=number);
    return 0;
}