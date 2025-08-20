#include <stdio.h>

int main() {

    printf("Temperature Conversion Calculator\n");
    printf("Celsius to Fahrenheit (C)\n");
    printf("Fahrenheit to Celsius (F)\n");

    char choice = '\0';

    printf("Please enter your choice: ");
    scanf("%c", &choice);

    float celsius = 0.0;
    float fahrenheit = 0.0;

    if(choice == 'C'){
        printf("Enter temperature in Celsius (C): ");
        scanf("%f", &celsius);
        fahrenheit = (9.0/5.0 * celsius) + 32;
        printf("%.2fC ==> %.2fF", celsius, fahrenheit);
    }
    else if(choice == 'F'){
        printf("Enter temperature in Fahrenheit (F): ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5.0/9.0;
        printf("%.2fF ==> %.2fC", fahrenheit, celsius);
    }
    else{
        printf("You have entered an invalid choice!");
    }

    return 0;
}