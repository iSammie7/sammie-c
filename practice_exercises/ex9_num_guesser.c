#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Number Guessing Game! Uses a pseudo-randomizer!

    srand(time(NULL));
 
    int min = 1;
    int max = 25;
 
    // Uses offset
    int randomNum = (rand() % (max - min + 1)) + min;
    int userInput = 0;
    int attempts = 1;

    printf("Guess a number from (%d - %d): ", min, max);
    scanf("%d", &userInput);
    
    while(userInput != randomNum){
        if(userInput > randomNum){
            printf("Too High! Try Again: ");
            scanf("%d", &userInput);
            attempts ++;
        }
        else{
            printf("Too Low! Try Again: ");
            scanf("%d", &userInput);
            attempts ++;
        }

    }

    printf("Correct!\n");
    printf("The answer is %d\n", randomNum);
    printf("It took you %d tries!", attempts);

    return 0;
}