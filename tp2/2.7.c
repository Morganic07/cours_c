#include <stdio.h>

int main() {
    int jour;
    int mois;
    int annee;

    scanf("%d %d %d", &jour, &mois, &annee);
    printf("jour : %d\nmois : %d\nannee : %d\n", jour, mois, annee);
    printf("on est le %d/%d/%d", jour, mois, annee);


    return 0;
}