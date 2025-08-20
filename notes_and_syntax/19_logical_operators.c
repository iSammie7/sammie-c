#include <stdio.h>
#include <stdbool.h>

int main() {

    // Logical Operators are used to combine or modify boolean expressions.

    // && = and
    // || = or
    // ! = not

    int temp = 100;
    int temp2 = 20;
    bool isRainy = true;

    // && checks if both conditions are true.

    if(temp > 0 && temp < 30){
        printf("The temperature is good.");
    }
    else{
        printf("The temperature is bad.");
    }


    // || checks if one of the conditions is true.

    if(temp2 <= 0 || temp2 >= 30){
        printf("The temperature is bad.");
    }
    else{
        printf("The temperature is good.");
    }


    // ! reverses the boolean statement.

    if(!isRainy){
        print("The weather is clear!");
    }
    else{
        printf("The weather is rainy.");
    }

    return 0;
}