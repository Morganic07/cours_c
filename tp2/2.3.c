#include <stdio.h>

int main() {
    int note1;
    int note2;
    float moyenne;

    scanf("%d", &note1);
    scanf("%d", &note2);

    moyenne = (note1 + note2) / 2;

    printf(("la moyenne de %d et %d est %f\n"), note1, note2, moyenne);

    return 0;
}
