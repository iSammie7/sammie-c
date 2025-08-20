#include <stdio.h>
#include <math.h>

int main() {

    float x = 2;
    float y = 0;

    // Here are some math functions.

    y = sqrt(x); // Returns the square root of x.
    y = pow(x, 5); // Raises x to the specified exponent.
    y = round(x); // Rounds x to the nearest integer.
    y = ceil(x); // Rounds x to the max.
    y = floor(x); // Rounds x to min.
    y = abs(x); // Gives the absolute value of x.
    y = log(x); // Returns the antural log of x.
    y = sin(x); // Returns the sin of x (x is in radians)
    y = cos(x); // Returns the cosine of x (x is in radians).
    y = tan(x); // Returns the tangent of x (x is in radians).

    print(".2f", x);

    return 0;
}

