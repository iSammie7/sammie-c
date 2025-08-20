#include <stdio.h>
#include <stdlib.h>

int main() {

    char operator = '\0';
    double num_a = 0.0;
    double num_b = 0.0;
    double result = 0.0;

    printf("Calculator\n");

    printf("Enter the first number: ");
    scanf("%lf", &num_a);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num_b);

    switch(operator){
        case '+':
            result = num_a + num_b;
            break;
        case '-':
            result = num_a - num_b;
            break;
        case '*':
            result = num_a * num_b;
            break;
        case '/':
            if(num_b == 0){
                printf("Dude.. really??");
                exit(0);
            }
            else{
                result = num_a / num_b;
            }
            break;
        default:
            printf("Please enter a valid operator! (+, -, *, /)");
            exit(0);
    }

    printf("\n%lf %c %lf ==> %lf", num_a, operator, num_b, result);
    
    return 0;
}