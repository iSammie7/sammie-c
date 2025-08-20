#include <stdio.h>

int main() {

    char grade = 'A';
    char symbol = '%';
    char currency = '$';

    printf("Your grade is %c. Excellent Work!\n", grade);
    printf("Percentage uses the symbol %c.\n", symbol);
    printf("The currency is %c.", currency);

    return 0;
}

// %c is the format specifier for the data type char (character).