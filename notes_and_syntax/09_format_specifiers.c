#include <stdio.h>

int main() {

    // Format specifiers are special tokens that begin with a % symbol.
    // They're followed by a character that specifies the data type.
    // Also used for optional modifiers (width, precision, flags).
    // They control how data is displayed or interpreted.

    int age = 17;
    float price = 399.9;
    double conc = 56.02496;
    char currency = '$';
    char name[] = "iSammie";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", conc);
    printf("%c\n", currency);
    printf("%s\n", name);

    return 0;
}