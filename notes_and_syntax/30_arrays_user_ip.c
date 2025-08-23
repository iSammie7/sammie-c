#include <stdio.h>

int main() {

    // int scores[] = {100, 96, 84, 72, 60};

    // To create an array.
    int unknown[5]; // Contains 5 elements

    for(int i = 0; i < 5; i ++){
        printf("%d ", unknown[i]);
    }
    // This gives a set of undefined values.
    // Because C doesn't automatically clear memory used previously by other programs.
    // This can lead to undefined behaviour in programs.
    
    // Whenever you partially initialize an array any unspecified elements are set to 0.
    
    printf("\n");

    int scores[5] = {0};

    // printf("Please enter a score: ");
    // scanf("%d", &scores[0]);
    // printf("Please enter a score: ");
    // scanf("%d", &scores[1]);
    // printf("Please enter a score: ");
    // scanf("%d", &scores[2]);
    // printf("Please enter a score: ");
    // scanf("%d", &scores[3]);
    // printf("Please enter a score: ");
    // scanf("%d", &scores[4]);

    // printf("%d ", scores[0]);
    // printf("%d ", scores[1]);
    // printf("%d ", scores[2]);
    // printf("%d ", scores[3]);
    // printf("%d ", scores[4]);

    // Faster to do with a for loop..

    int size = sizeof(scores) / sizeof(scores[0]);

        for(int i = 0; i < size; i ++){
            printf("Please enter a score: ");
            scanf("%d", &scores[i]);
        }

        for(int i = 0; i < size; i ++){
            printf("%d ", scores[i]);
        }

    return 0;
}