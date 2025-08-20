#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age);
bool ageCheck(int age);

int main() {
    
    // Function prototypes provide the compiler with information about a function.
    // Such as it's name, return type and its parameters before it's defined.
    // Enables type checking and allows them to be used before definition.
    // Improves readability, organization and helps prevent errors.
    
    hello("iSammie", 17);
    ageCheck(17);

    if(ageCheck){
        printf("You are old enough to work at Krusty Krabs.");
    }
    else{
        printf("You need to be 16 or older to work at Krusty Krabs");
    }
    
    return 0;
}

void hello(char name[], int age){
    printf("Hello! %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}