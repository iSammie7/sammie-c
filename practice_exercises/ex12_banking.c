#include <stdio.h>

void checkFunds(float balance);
float credit();
float debit(float balance);

int main() {

    // BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;
    
    printf("----- Welcome to the DZ Bank -----");

    do{
        printf("\nSelect an option: \n");
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkFunds(balance);
                break;
            case 2:
                balance += credit();
                break;
            case 3:
                balance -= debit(balance);
                break;
            case 4:
                printf("\nThank you for using the bank!\n");
                break;
            default:
                printf("\nInvalid choice! Please select (1 - 4)\n");
        }

    }while(choice != 4);

    return 0;
}

void checkFunds(float balance){
    printf("\nYour current balance is $%.2f\n", balance);
}

float credit(){
    float amount = 0.0f;

    printf("\nPlease enter amount you would like to deposit: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid Amount!\n");
    }

    else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
}

float debit(float balance){
    float amount = 0.0f;

    printf("\nPlease enter amount you would like to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid Amount!\n");
    }

    else if(amount > balance){
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
    }

    else{
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}