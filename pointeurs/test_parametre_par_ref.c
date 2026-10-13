#include <stdio.h>

void echange(int a, int b);

int main(){
    int var1 = 10;
    int var2=20;
    printf("var1 : %d, var2 : %d \n", var1, var2);
    echange(var1, var2);
    printf("var 1 : %d , var2 : %d \n",var1, var2 );


    return 0;
}


void echange(int a, int b){

    int temp;

    printf("a : %d , b : %d\n", a, b);
    temp = a;
    a=b;
    b=temp;
    printf("a : %d, b : %d \n", a, b);
}