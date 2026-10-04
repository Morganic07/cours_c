#include <stdio.h>


int NombreOrdonnes(int a,int b, int c);

int main(){

    int a1 ;
    int a2; 
    int a3;

    do{
        printf("Entrez 3 valeurs : \n");
        scanf("%d", &a1);
        scanf("%d", &a2);
        scanf("%d", &a3);
        printf("%d \n", NombreOrdonnes(a1, a2, a3));

    }while (a1 != 0 && a2 != 0 && a3 != 0);

    return 0;
}

int NombreOrdonnes(int a,int b, int c){

    if (a != 0 && b != 0 && c != 0) return (a<=b && b<=c);


}