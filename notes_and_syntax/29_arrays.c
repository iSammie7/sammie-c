#include <stdio.h>

int main() {

    // Arrays are a fixed size collection of elements of the same data type.
    // They are similar to a variable, but they can hold more than one value.

    int values[] = {5, 25, 125, 625, 3125};

    // Normally, if you pass an array to a function like this, it decays into a pointer.
    printf("%d\n", values);

    // Each value in an array is called an element.
    // You can print elements in an array by index.
    printf("%d\n", values[2]);

    // If you try to access an element that doesn't exist, you get an unusual value.
    // Unlike many other programming languages, where you get out of bounds exceptions.
    // You can go out of bounds when working with arrays in C.
    // Be careful because this can cause undefined behaviour in programs.

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    printf("%c\n", grades[0]);

    // An array of character is very similar to strings in C.
    char name[] = "Sammie";
    printf("%c\n", name[3]);

    // You can change values of elements in an array by index.
    values[0] = 4;
    values[1] = 16;
    values[2] = 64;
    values[3] = 256;
    values[4] = 1024;

    // printf("%d ", values[0]);
    // printf("%d ", values[1]);
    // printf("%d ", values[2]);
    // printf("%d ", values[3]);
    // printf("%d ", values[4]);

    // An easier way to display all the elements of an array is to use a for loop.

    for(int i = 0; i < 5; i ++){
        printf("%c ", grades[i]);
    }
    
    // To automatically calculate the size of an array, you can do this:-
    
    printf("%d\n", sizeof(values)); // Returns the size of the array.
    printf("%d\n", sizeof(values[0])); // Returns the size of each element.
    // btw, the reason we use 0 here because not all arrays have multiple elements.
    
    // Now, the trick to calculate the number of elements in the array is..
    
    int size = sizeof(values) / sizeof(values[0]);
    
    // This prints all the elements in the array.
    for(int i = 0; i < size; i ++){
        printf("%d ", values[i]);
    }

    // You can do this with any array.

    return 0;
