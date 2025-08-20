#include <stdio.h>
#include <stdbool.h>

int main() {

    char name[50] = "";

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name.");
    }
    else{
        printf("Hello! %s.", name);
    }

    return 0;
}