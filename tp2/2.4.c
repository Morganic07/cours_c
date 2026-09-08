#include <stdio.h>

int main() {
    int a ;
    int b;
    float x;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("que vaut x dans l'équation %dx+%d=0\n", a, b);
    scanf("%f", &x);
    if (a*x+b==0) {
        printf("la solution est bonne");
    } 
    else {
        printf("la solution est fausse");
    }
    return 0;
}