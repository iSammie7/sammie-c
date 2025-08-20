#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isStudent = true;

    // You don't necessarily need to put = true, typing the variable name already does that.

    if(isStudent = true){
        printf("You are a student.");
    }
    else{
        printf("You are not a student.");
    }

    return 0;
}