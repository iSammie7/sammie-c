#include <stdio.h>
#include <math.h>

int main() {

    // Circle Calculator

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    // const makes a variable read only and you cannot assign new values to it.
    // It is good practice to make constants all uppercase.

    printf("Please enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("\nArea: %.2lf sq. units", area);
    printf("\nSurface Area: %.2lf sq. units", surfaceArea);
    printf("\nArea: %.2lf cubic units.", volume);

    return 0;
}