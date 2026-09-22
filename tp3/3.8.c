#include <stdio.h>


int main(){
    int annee;

    scanf("%d", &annee);


    if (annee%4==0 && annee%100!=0 || annee%400==0){
        printf("bissextile");
    }


    else{
        printf("non bissextile");
    }


    return 0;
}