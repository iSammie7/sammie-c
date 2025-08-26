#include <stdio.h>
#include <string.h>

int main(){

    // Arrays of Strings

    // char fruits[][10] = {"Apple", 
    //                      "Banana", 
    //                      "Mango", 
    //                      "Lemon"};

    // fruits[0][0] = 'e';
    // fruits[0][4] = 'A';

    // fruits[1][0] = 'a';
    // fruits[1][5] = 'B';

    // fruits[2][0] = 'o';
    // fruits[2][4] = 'M';

    // fruits[3][0] = 'n';
    // fruits[3][4] = 'L';

    // int size = sizeof(fruits) / sizeof(fruits[0]);

    // for(int i = 0; i < size; i++){
    //     printf("\n%s", fruits[i]);
    // }

    // EXERCISE

    char names[3][25] = {0};

    // printf("Please enter a name: ");
    // fgets(names[0], sizeof(names[0]), stdin);
    // names[0][strlen(names[0]) - 1] = '\0';

    // printf("Please enter a name: ");
    // fgets(names[1], sizeof(names[1]), stdin);
    // names[1][strlen(names[1]) - 1] = '\0';
    
    // printf("Please enter a name: ");
    // fgets(names[2], sizeof(names[2]), stdin);
    // names[2][strlen(names[2]) - 1] = '\0';
    
    // printf("\n%s", names[0]);
    // printf("\n%s", names[1]);
    // printf("\n%s", names[2]);

    // Can be condensed using a loop.

    int size = sizeof(names) / sizeof(names[0]);

    for(int i = 0; i < size; i++){
        printf("Please enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0'; 
    }

    for(int j = 0; j < size; j++){
        printf("\n%s", names[j]);
    }

    return 0;
}