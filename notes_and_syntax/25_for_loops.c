#include <stdio.h>
#include <windows.h>

int main() {

    // For loop is used to repeat a block of code for a limited amount of times.
    // A for loop has three parameters for(Initialization; Condition; Update)

    for(int i = 10; i >= 0; i --){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!!");

    return 0;
}