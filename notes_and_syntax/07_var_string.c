#include <stdio.h>

int main() {

    char name[] = "iSammie";
    char food[] = "momos";
    char email[] = "sammie.wav@gmail.com";

    printf("Hello! I am %s!\n", name);
    printf("My favorite food is %s!\n", food);
    printf("My Email ID is %s", email);

    return 0;
}

// C does not have a dedicated string datatype.
// A string in C is just an array of characters ending with '\0' (null terminator).
// %s is the format specifier for a string.