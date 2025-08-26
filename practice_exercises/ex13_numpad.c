#include <stdio.h>

int main(){

    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};

    int row = sizeof(numpad)/ sizeof(numpad[0]);
    int col = sizeof(numpad[0])/ sizeof(numpad[0][0]);
    
    for(int i = 0; i < row; i++){
        printf("\n");
        for(int j = 0; j < col; j++){
            printf("%c ", numpad[i][j]);
            }
        }
    
    return 0;
}