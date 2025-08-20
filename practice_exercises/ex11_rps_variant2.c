// Another RPS variant but uses switches instead.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getCompChoice();
int getUserChoice();
void checkWinner(int userChoice, int compChoice);

int main() {
    
    printf("\n\n---------- ROCK PAPER SCISSORS ----------\n\n");
    printf("CHOOSE 1 FOR ROCK\nCHOOSE 2 FOR PAPER\nCHOOSE 3 FOR SCISSORS\n\n");
    
    int user = getUserChoice();
    int comp = getCompChoice();

    switch(user){
        case 1:
            printf("You chose Rock!\n");
            break;
        case 2:
            printf("You chose Paper!\n");
            break;
        case 3:
            printf("You chose Scissors!\n");
            break;
    }

    switch(comp){
        case 1:
            printf("Computer chose Rock!\n");
            break;
        case 2:
            printf("Computer chose Paper!\n");
            break;
        case 3:
            printf("Computer chose Scissors!\n");
            break;
    }

    checkWinner(user, comp);

    printf("\n\n-----------------------------------------");

    return 0;
}

int getCompChoice(){
    srand(time(NULL));
 
    int min = 1;
    int max = 3;
    int num = (rand() % (max - min + 1)) + min;
    return num;
}

int getUserChoice(){
    int num = 0;
    printf("Enter your choice!: ");
    scanf("%d", &num);

    while(num < 1 || num > 3){
        printf("Invalid Choice! Please choose a valid option (1-3): ");
        scanf("%d", &num);
    }

    return num;
}

void checkWinner(int userChoice, int compChoice){
    if(userChoice == compChoice){
        printf("It's a draw!");
    }
    else if((userChoice == 1 && compChoice == 3) ||
            (userChoice == 2 && compChoice == 1) ||
            (userChoice == 3 && compChoice == 2)){
        printf("You Win!");
            }
    else{
        printf("You Lose!");
    }
}