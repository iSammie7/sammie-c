#include <stdio.h>

int main(){

    // A quiz game created using 2D arrays

    char questions[][100] = {"How many moons does Jupiter have?",
                             "Which planet is known as the red planet?",
                             "Which planet has the fastest rotation period?",
                             "Is Dizzie gay?"};
    char options[][100] = {"A. 42\nB. 80\nC. 92\nD. 97",
                           "A. Mercury\nB. Venus\nC. Mars\nD. Saturn",
                           "A. Earth\nB. Jupiter\nC. Mercury\nD. Uranus",
                           "A. Yes\nB. No\nC. Maybe\nD. IDK"};

    char answerkey[] = {'D', 'C', 'B', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("-------- QUIZ GAME ---------");

    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("\nPlease enter your choice: ");
        scanf(" %c", &guess);

        if(guess == answerkey[i]){
            printf("\nCorrect Answer!\n");
            score ++;
        }
        else{
            printf("\nIncorrect Answer!\n");
        }
    }

    printf("Your score is %d", score);

    return 0;
}