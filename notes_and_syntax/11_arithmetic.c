#include <stdio.h>

int main() {

    // Arithmetic Operators = + - * / % ++ --

    int x = 7;
    int y = 5;
    int z = 0;

    // z = x + y;
    // z = x - y;
    // z = x * y;

    // In the case of integer division, the number doesn't retain the decimal values.
    // You'll need to divide by a float for it to properly work.

    // z = x / y;
    // z = x % y

    printf("%d\n", z);

    // ++ and -- basically increment/decrement the value by 1.

    int n = 5;
    // num ++;
    // num --;
    printf("%d\n", n);
    
    // Augmented assignment operators.
    
    int num = 10;
    // num += 2;
    // num -= 2;
    // num *= 2;
    // num /= 2;
    printf("%d\n", num);

    return 0;
}