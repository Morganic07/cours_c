#include <stdio.h>

void init_tab(float t[]){
    for (int i = 0; i<100; i++){
        t[i]=1.0;
    }
}



void affiche_tab(float t[]){
    for (int i=0; i<100;i++){
        printf("%f\n", t[i]);
    }
}

int main(){


    return 0;
}