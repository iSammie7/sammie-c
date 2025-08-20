#include <stdio.h>

int main() {

    // for(int i = 1; i <= 10; i ++){
    //     for(int j = 1; j <= 10; j ++){
    //         int res = i * j;
    //         printf("%d x %d = %d\n", i, j, res);
    //     }
    //     printf("\n");
    // }

    int row = 0;
    int col = 0;
    char sym = '\0';

    printf("Please enter the number of rows: ");
    scanf("%d", &row);
    printf("Please enter the number of columns: ");
    scanf("%d", &col);
    printf("Please enter the symbol you want to use: ");
    scanf(" %c", &sym);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%c", sym);
        }
    }

    return 0;
}