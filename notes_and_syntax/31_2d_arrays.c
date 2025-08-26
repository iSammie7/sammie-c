#include <stdio.h>

int main(){

    // A 2D array is an array where each element is an array.
    // An array of arrays, also known as a multi-dimensional array.
    // array[][] = {{}, {}, {}};

    int numbers[] = {1, 2, 3};

    // They're great if you need a matrix or a grid of data.

    int values[][4] = {{2, 4, 8, 16},
                       {3, 9, 27, 81},
                       {4, 16, 64, 256},
                       {5, 25, 125, 625}};

    // in C, you have to declare the number of columns for 2D arrays


    // This works exactly like Matrix
    // printf("%d ", values[0][0]);
    // printf("%d ", values[0][1]);
    // printf("%d ", values[0][2]);
    // printf("%d\n", values[0][3]);

    // printf("%d ", values[1][0]);
    // printf("%d ", values[1][1]);
    // printf("%d ", values[1][2]);
    // printf("%d\n", values[1][3]);

    // printf("%d ", values[2][0]);
    // printf("%d ", values[2][1]);
    // printf("%d ", values[2][2]);
    // printf("%d\n", values[2][3]);

    // printf("%d ", values[3][0]);
    // printf("%d ", values[3][1]);
    // printf("%d ", values[3][2]);
    // printf("%d\n", values[3][3]);

    // You can do this faster with a for loop.

    int row = sizeof(values)/ sizeof(values[0]);
    int col = sizeof(values[0])/ sizeof(values[0][0]);
    
    for(int i = 0; i < row; i++){
        printf("\n");
        for(int j = 0; j < col; j++){
            printf("%d ", values[i][j]);
            }
        }

    return 0;
}