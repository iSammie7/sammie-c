#include <stdio.h>

int sample = 0; // This is a global variable.

// Globals stay the same throughout the whole program.
// It is recommended to not use globals in C.
// Globals make a program hard to debug and cause various problems.
// Such as accidental modification inside a function.

int plus(int x, int y){
    int result = x + y;
    return result;
}

int minus(int x, int y){
    int result = x - y;
    return result;
}

int main() {

    // Variable scope refers to where a variable is recognized and accessible.
    // Variables can share the same name if they're in different scopes {}
    // A function cannot see variables inside another.
    // You have to pass them in as arguments.

    int x = 7;
    int y = 9;
    
    int result = minus(x, y);

    return 0;
}