#include <stdio.h>

int main(){
    int a;
    int r;
    int nmax;
    int somme=0;
    int l;

    scanf("%d", &a);
    scanf("%d", &r);
    scanf("%d", &nmax);

    printf("la suite est %d*n + %d\n", a, r);
    printf("le nombre de termes est %d\n", nmax);

    for(int n=1; n<=nmax; n++){
        somme = somme + a+(n-1)*r;
        printf("le terme %d est %d\n", n, a+(n-1)*r);
    }

    
    l = a + (nmax-1)*r;
    printf("le dernier terme est %d\n", l);

    printf("la somme des termes est %d\n", somme);

    return 0;
}




int alternative(){

    int raison, start;
    int nb_termes;
    int last;
    float somme;


    printf("entrez la raison et la valeur du premier terme de la suite \n")
    scanf("%d", &raison);
    scanf("%d", &start);    
    printf("entrez le nombre de termes de la suite \n");
    scanf("%d", &nb_termes);

    if nb_termes <= 0 {
        printf("le nombre de termes doit être supérieur à 0\n");
        return 1;
    }


    last = start + (nb_termes-1)*raison;
    somme = (start + last) * nb_termes / 2;

}