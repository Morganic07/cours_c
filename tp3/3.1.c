#include <stdio.h>

int main(){
    int a = 1;
    int b = 2; 
    int nbmin;

    if (a>b) {
        nbmin = b;
    }
    else {
        nbmin = a;
    }

    printf("le plus petit est %d\n", nbmin);


    return 0;
    
}