#include <stdio.h>


int NombreOrdonnes(int a,int b, int c);

int main(){

    int a1 =1, a2, a3;

    while (a1 != 0 && a2 != 0 && a3 != 0){
        printf("Entrez 3 valeurs : \n");
        scanf("%d", a1);
        scanf("%d", a2);
        scanf("%d", a3);
        printf("%d \n", NombreOrdonnes(a1, a2, a3));

    }

    return 0;
}

int NombreOrdonnes(int a,int b, int c){

    if (a<=b && b <=c) return 1;

    else return 0;


}