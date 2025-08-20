#include <stdio.h>

int main() {

    // Here are some modifiers for integers.

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    // Here, %4d means a width of 4.

    printf("Width\n");
    printf("%4d\n", num1);
    printf("%4d\n", num2);
    printf("%4d\n\n", num3);
    
    // You can left justify these numbers like this,.
    
    printf("Left Justified\n");
    printf("%-4d\n", num1);
    printf("%-4d\n", num2);
    printf("%-4d\n\n", num3);
    
    // You can use leading zeroes like this.
    
    printf("Leading Zeroes\n");
    printf("%04d\n", num1);
    printf("%04d\n", num2);
    printf("%04d\n\n", num3);
    
    // You can also show plus/minus signs like.
    
    printf("Plus/Minus signs\n");
    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n\n", num3);
    
    // precision
    
    float price1 = 49.99;
    float price2 = 4.49;
    float price3 = 99.99;
    
    printf("Precision\n");
    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n\n", price3);
    
    // We can combine these together like
    
    printf("Combined\n");
    printf("%+07.2f\n", price1);
    printf("%+07.2f\n", price2);
    printf("%+07.2f", price3);

    return 0;
}
