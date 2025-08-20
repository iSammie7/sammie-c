#include <stdio.h>

int main() {

    // the break keyword is used to break out of a loop. (STOP)
    // the continue keyword is used to skip a given cycle of the loop (SKIP)

        for(int i = 1; i <= 10; i ++){

            // This skips all the even numbers.
            
            if(i % 2 == 0){
                continue;
            }

            // This stops the loop after the value exceeds 7

            if(i > 7){
                break;
            }

        printf("%d\n", i);
    }

    return 0;
}