#include <stdio.h>


int main(){

    int u0 = 2;
    int u1 =1;

    int lucas;

    printf("u0 = %d\n", u0);
        printf("u1 = %d\n", u1);


    for (int i =2; i<=20; i++){
        lucas = u0 + u1;
        printf("u%d = %d \n", i, lucas);
        u0 = u1;
        u1 = lucas;
    }


    return 0;
}