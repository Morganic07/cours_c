#include <stdio.h>
#include <math.h>

int volumeCube(int arete);
float volumeCylindre(int hauteur, int rayon);
float volumeSphere(int rayon);
int volume();


int main(){

    int type;
    int valeur;

    do{
        scanf("%d", &type);
        scanf("%d", &valeur);
        printf("%d",volume(type, valeur));
    }while (type !=0);


    return 0;
}

int volumeCube(int arete){
    return arete*arete*arete;
}

float volumeCylindre(int hauteur, int rayon){
    return 3.14159265358979323846*hauteur*rayon;
}

float volumeSphere(int rayon){
    return 3/4*3.14159265358979323846*rayon*rayon*rayon;
}


int volume(int type, int valeur){

    if (type ==1) return volumeCube(valeur);


    else if (type ==2) {
        int rayon;
        printf("rentrer le rayon : \n");
        scanf("%d", &rayon);
        return volumeCylindre(valeur, rayon);}


    else if (type == 3) return volumeSphere(valeur);
} 