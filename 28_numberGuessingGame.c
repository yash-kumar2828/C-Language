#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guess=0;
    int guessed;

    // printf("Random number: %d\n", randomNumber);
    
    do{
        printf("guess the number=");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("lower number please\n");
        }else if(guessed<randomNumber){
            printf("higher number please\n");
        }else{
            printf("congrats!\n");
        }
        no_of_guess++;
    }while(guessed!=randomNumber);
    printf("you guessed the number in %d guesses",no_of_guess);

    return 0;
}
