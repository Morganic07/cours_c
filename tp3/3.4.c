#include <stdio.h>


int main(){

    int a = 1;
    int b = -2;


    if (a>0 && b>0) {
        printf("le produit des deux nombres est positif\n");
    }
    else if (a<0 && b<0) {
        printf("le produit des deux nombres est positif\n");
    }
    else if (a>0 && b<0)||(a<0 && b>0) {
        printf("le produit des deux nombres est négatif\n");
    }

    else if (a==0 || b==0) {
        printf("le produit des deux nombres est nul\n");
    }

    return 0;
    
}



int alternative(){

    int a = 1;
    int b = -2;

    if (a*b>0) {
        printf("le produit des deux nombres est positif\n");
    }
    else if (a*b<0) {
        printf("le produit des deux nombres est négatif\n");
    }
    else {
        printf("le produit des deux nombres est nul\n");
    }

}