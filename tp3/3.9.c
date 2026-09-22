#include <stdio.h>


int main(){
    int nombre = 13;

    int div = nombre/2;

    printf("%d", div);

    if (div*2==nombre) {
        printf("pair");
    }
    
    else{
        printf("impair");
    }

    return 0;
}