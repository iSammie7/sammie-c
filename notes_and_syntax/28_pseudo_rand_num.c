#include <stdio.h>
#include <stdlib.h> // Includes the standard library.

int main() {

    // Pseudo randomness appears random but is determined by a mathematical
    // formula that uses a seed value to generate a predictable sequence of
    // numbers.
 
    // Advanced: MersenneTwister or /dev/random
 
    // You can use the srand() function to define a seed value
 
    srand(time(NULL));
 
    // Initially, this always returns the same number because the seed value
    // remains the same, but this changes after we define a seed value that
    // varies with time.
 
    // printf("%d", rand());
 
    int min = 50;
    int max = 100;
 
    // Uses offset
    int randomNum = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum, randomNum2, randomNum3);

    return 0;
}

// Do note that this isn't true randomness.