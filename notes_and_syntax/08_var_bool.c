#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isOnline = true;
    bool isStudent = false;
    bool forSale = false;

    printf("%d\n", isOnline);

    if(isOnline){
        printf("You are Online!\n");
    }
    else{
        printf("You are Offline!\n");

    }

    if(isStudent){
        printf("You are a student!\n");
    }
    else{
        printf("You are not a student!\n");
    }

    if(forSale){
        printf("This item is for sale!\n");
    }
    else{
        printf("This item is not for sale!\n");
    }

    return 0;
}

// Bool or Booleans are either True (1) or False (0)
// #include <stdbool.h> tells the compiler to import the standard boolean library.
// Booleans are rarely displayed using variables.
// They are used more within the program.
// Such as logic flows and conditional statements.
// You can use 0 and 1 instead of True and False, but True and Flase are much cleaner.