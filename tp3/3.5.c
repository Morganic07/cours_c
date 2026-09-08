#include <stdio.h>


int main(){

    int age;
    printf("entrez votre age: ");
    scanf("%d", &age);


    if (age>=18) {
        printf("peut voter\n");
    }
    else {
        printf("ne peut pas voter\n");
    }


    

    if (age<18) {
        printf("ne peut pas voter\n");
    }
    else {
        printf("peut voter\n");
    }


    if (!(age>=18)) {
        printf("ne peut pas voter\n");
    }
    else {
        printf("peut voter\n");
    }

    return 0;
}