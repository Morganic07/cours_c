#include <stdio.h>


int main(){

    int u1 = 2;
    int u2 =1;

    int lucas;

    for (int i =1; i<=20; i++){
        lucas = u1 + u2;
        printf("u", i, "= ", lucas);
        u1 = u2;
        u2 = lucas;
    }


    return 0;
}