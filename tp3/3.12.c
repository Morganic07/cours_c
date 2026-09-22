#include <stdio.h>

int main(){

    int deplacement;

    scanf("%d", &deplacement);

    switch(deplacement){
        case 6:
            printf("est");
            break;
        case 4:
            printf("ouest");
            break;
        case 2:
            printf("sud");
            break;
        case 8:
            printf("nord");
            break;
        default:
            printf("deplacement non reconnu");
    }
    return 0;
}