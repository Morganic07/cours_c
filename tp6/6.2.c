#include <stdio.h>


int NombreOrdonnes(int a,int b, int c);

int main(){

    int a1 =1;
    int a2; 
    int a3;

    while (a1 != 0 && a2 != 0 && a3 != 0){
        printf("Entrez 3 valeurs : \n");
        scanf("%d", &a1);
        scanf("%d", &a2);
        scanf("%d", &a3);
        printf("%d \n", NombreOrdonnes(a1, a2, a3));

    }

    return 0;
}

int NombreOrdonnes(int a,int b, int c){

    return (a<=b && b<=c)


}