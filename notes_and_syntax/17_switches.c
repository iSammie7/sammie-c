#include <stdio.h>

int main() {

    // Switch is an alternative to using many if-else statements
    // It is more efficient with fixed integer values.

    int dayOfWeek = 0;

    print("Enter a day of the week (1-7): ");
    scanf("%d", &dayOfWeek);
    
    // if(dayOfWeek == 1){
    //     printf("Today is Monday!");
    // }
    // else if(dayOfWeek == 2){
    //     printf("Today is Tuesday!");
    // }
    // else if(dayOfWeek == 3){
    //     printf("Today is Wednesday!");
    // }
    // else if(dayOfWeek == 4){
    //     printf("Today is Thursday!");
    // }
    // else if(dayOfWeek == 5){
    //     printf("Today is Friday!");
    // }
    // else if(dayOfWeek == 6){
    //     printf("Today is Saturday!");
    // }
    // else if(dayOfWeek == 7){
    //     printf("Today is Sunday!");
    // }
    // else{
    //     printf("Please a enter a valid number! (1-7)");
    // }

    // A better and faster way to do this would be:-

    switch(dayOfWeek){
        case 1:
            printf("Today is Monday!");
            break;
        case 2:
            printf("Today is Tuesday!");
            break;
        case 3:
            printf("Today is Wednesday!");
            break;
        case 4:
            printf("Today is Thursday!");
            break;
        case 5:
            printf("Today is Friday!");
            break;
        case 6:
            printf("Today is Saturday!");
            break;
        case 7:
            printf("Today is Sunday!");
            break;
        default:
            printf("Please a enter a valid number! (1-7)");
    }

    // Is much more efficient and readable (Can also be used with characters)
    // Do note that it is important to use break.
    // Otherwise it runs the code for all the remaining cases.

    return 0;
}