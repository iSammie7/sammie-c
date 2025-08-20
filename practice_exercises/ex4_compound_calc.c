#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    float rate = 0.0;
    int timesCompounded = 0;
    int years = 0;
    double amount = 0;
    char currency = '$';

    printf("Compound Interest Calculator\n\n");

    printf("Please enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Please enter interest rate %: ");
    scanf("%f", &rate);

    printf("Please enter number of compoundings per year: ");
    scanf("%d", &timesCompounded);

    printf("Please enter the time in years: ");
    scanf("%d", &years);

    rate /= 100;
    amount = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

    printf("\nThe total amount after %d years will be: %c%.2lf", years, currency, amount);

    return 0;
}