#include <stdio.h>

int main() {

    float gpa = 0.7;
    float price = 29.49;
    float temp = -23.1;

    printf("Your GPA is %.1f Harvard want you twin :)\n", gpa);
    printf("The price of the product is $%.1f\n", price);
    printf("The temperature is %.2f°C. It's really fucking cold.", temp);

    return 0;
}

// %f is the format specifier for the data type float.
// Can also be used for precision as shown above!