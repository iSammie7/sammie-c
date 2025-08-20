#include <stdio.h>
#include <stdbool.h>

double square(double num){
    return num * num;
}

double cube(double num){
    return num * num * num;
}

double quad(double num){
    return num * num * num * num;
}

bool ageCheck(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}

int getMax(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

    // You need to specify the data tpe of the value to be returned before the function name.
    // If the function returns nothing, it's a void function.

int main() {

    // Returns a value back to a function where it's called.

    double x = quad(2);
    double y = cube(3);
    double z = square(4);
    
    printf("%.2lf\n", x);
    printf("%.2lf\n", y);
    printf("%.2lf\n\n", z);

    int userAge = 0;

    printf("Please enter your age: ");
    scanf("%d", &userAge);

    if(ageCheck(userAge)){
        printf("You may sign up!");
    }
    else{
        printf("You need to be 18 or older to be able to sign up.\n\n");
    }

    int max = getMax(7, 9);
    printf("%d", max);

    return 0;
}