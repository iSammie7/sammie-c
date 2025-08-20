#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    // A while loop executes a code block repeatedly while a given condition remains true.
    // Condition must be true for us to enter while loop.

    // while(1 == 1){
    //     printf("GIVE UP!");
    // }

    // A do while loop doesn't require the condition to be true to start.
    // It only needs the condition to be true to repeat itself.

    // int num = 1;

    // do{
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &num);
    // }while(num <= 0);

    // printf("Good boy.");

    // char name[50] = "";

    // printf("Please enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';

    // while(strlen(name) == 0){
    //     printf("Name cannot be empty! Please enter your name: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strlen(name) - 1] = '\0';
    // }

    // printf("Hello %s!", name);

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = Yes, N = No): ");
        scanf(" %c", &response);

        if(response != 'Y' && response != 'y'){
            isRunning = false;
        }
    }

    printf("You quit the game.");

    return 0;
}