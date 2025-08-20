#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isStudent = true;
    bool isSenior = true;
    float price = 17.99;

    // No Criteria = 0% discount
    // Student = 16% discount
    // Senior = 24% discount
    // Student and Senior = 40% discount

    if(isStudent){
        if(isSenior){
            printf("You get a student discount of 16%%\n");
            printf("You get a senior discount of 24%%\n");
            price *= 0.6;
        }
        else{
            printf("You get a student discount of 16%%\n");
            price *= 0.84;
        }
    }
    else{
        if(isSenior){
            printf("You get a senior discount of 24%%\n");
            price *= 0.76;    
        }
    }

    printf("Your bill is $%.2f", price);
    
    return 0;
}