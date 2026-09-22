#include <stdio.h>


int main(){
    int chiffre = 8;

    switch(chiffre) {
        case 1:
            printf("un");
            break;
        case 2:
            printf("deux");
            break;
        case 3:
            printf("trois");
            break;
        default:
            printf("autre");
    }

    return 0;
}