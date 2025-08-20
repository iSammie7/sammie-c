#include <stdio.h>

int main() {

    // Weight Converter Program

    int choice = 0;
    printf("Weight Conversion Calculator\n");
    printf("1. Kilogram to Pounds.\n");
    printf("2. Pounds to Kilograms.\n");

    float kilograms = 0.0;
    float pounds = 0.0;

    printf("Please enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2fkg ==> %.2flbs", kilograms, pounds);
    }
    else if(choice == 2){
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2flbs ==> %.2fkg", pounds, kilograms);
    }
    else{
        printf("You have entered an invalid choice!");
    }

    return 0;
}