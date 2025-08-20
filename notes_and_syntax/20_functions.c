#include <stdio.h>

void happyBirthday(char buddayBoi[], int yearsOld){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s!", buddayBoi);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!", yearsOld);
}

int main() {

    // Functions are reusable sections of code that can be invoked or "called".
    // Arguments are values passed to a function that it can use.
    // Parameters are what a function expects to receive.

    char name[50] = "";
    int age = 0;

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Please enter your age: ");
    scanf("%d", &age);
    
    happyBirthday(name, age);

    return 0;
}

