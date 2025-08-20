#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getCompChoice();
int getUserChoice();
void checkWinner(int userChoice, int compChoice);

int main() {
    
    printf("\n\n\n---------- ROCK PAPER SCISSORS ----------\n\n");
    printf("CHOOSE 1 FOR ROCK\nCHOOSE 2 FOR PAPER\nCHOOSE 3 FOR SCISSORS\n\n");
    
        int user = getUserChoice();
        int comp = getCompChoice();

    checkWinner(user, comp);

    printf("\n-----------------------------------------");

    return 0;
}

getCompChoice(){
    srand(time(NULL));
 
    int min = 1;
    int max = 3;
    int num = (rand() % (max - min + 1)) + min;
    return num;
}

getUserChoice(){
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
    else if(userChoice == 1 && compChoice == 2)
        printf("You chose Rock. Computer chose Paper. Computer Wins!");
    else if(userChoice == 1 && compChoice == 3)
        printf("You chose Rock. Computer chose Scissors. You Win!");
    else if(userChoice == 2 && compChoice == 1)
        printf("You chose Paper. Computer chose Rock. You Win!");
    else if(userChoice == 2 && compChoice == 3)
        printf("You chose Paper. Computer chose Scissors. Computer Wins!");
    else if(userChoice == 3 && compChoice == 1)
        printf("You chose Scissors. Computer chose Rock. Computer Wins!");
    else if(userChoice == 3 && compChoice == 2)
        printf("You chose Scissors. Computer chose Paper. You Win!");
    else{
        printf("Wait.. What?? How did you do that???");
    }
}