#include <stdio.h>
#include <string.h>

// Provides a lot of new functions that you can use with strings.

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    // scanf function can be used to take input like this..
    // & is the 'address of' operator, it assigns a user input to a variable.

    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Please enter your GPA: ");
    scanf("%f", &gpa);
    printf("Please enter your grade: ");
    scanf(" %c", &grade);

    // A better way to take string input is to use the function fgets(), like this:-
    // You can use the sizeof() function here to get the size of the string.
    // We can call getchar() to clear the input buffer for the fgets() function.
    // Now, to avoid a newline after the string input, we can use the strlen function to
    // replace the newline with a null terminator.

    getchar();
    printf("Please enter your username: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("\n\n--------- RESULT ---------\n");
    printf("Student name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Your Grade: %c\n", grade);
    printf("--------------------------");

    return 0;
}