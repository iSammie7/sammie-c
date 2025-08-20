#include <stdio.h>

int main() {

    double pi = 3.141592653589793;
    double e = 2.718281828459045;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf", e);

    return 0;
}

// %lf is the format specifier for the data type double or long float.
// Can also be used for precision as shown above!
// C can only handle calculations for numbers upto 16 significant digits
// After that. It starts rounding.