#include <stdio.h>

int main() {

    // if statement = Run a block of code if a condition is true
    // Else, don't run it.

    int age = 0;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("You're an adult!");
    }
    else if(age < 0){
        printf("You haven't even been born yet.");
    }
    else if(age == 0){
        printf("Lil bro just spawned.");
    }
    else{
        printf("You're a child.");
    }

    return 0;
}