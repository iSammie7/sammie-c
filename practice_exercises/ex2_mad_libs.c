#include <stdio.h>
#include <string.h>

int main() {

    // IDEK WHAT TF THIS SHIT IS LOL

    char adj1[50] = "";
    char ent[50] = "";
    char adv[50] = "";
    char action[50] = "";
    char exp[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Enter a noun (an animal or a person): ");
    fgets(ent, sizeof(ent), stdin);
    ent[strlen(ent) - 1] = '\0';

    printf("Enter a verb (ending /w -ing): ");
    fgets(action, sizeof(action), stdin);
    action[strlen(action) - 1] = '\0';
    
    printf("Enter an adverb (description of verb): ");
    fgets(adv, sizeof(adv), stdin);
    adv[strlen(adv) - 1] = '\0';

    printf("Enter an expression (feeling): ");
    fgets(exp, sizeof(exp), stdin);
    exp[strlen(exp) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adj1);
    printf("In an exhibit, I saw %s.\n", ent);
    printf("%s was %s %s!\n", ent, action, adv);
    printf("I was %s!\n", exp);

    return 0;
}