#include <stdio.h>

int algo1(){

    for (int n=1; n<=100; n++){

        if (n%2==0) printf("%d\n", n);
    }


    return 0;
}

int algo2(){

    for (int n=0; n<=100; n+2) printf("%d\n", n);


    return 0;
}


int main(){

    int nombre = 101;
    int algo;

    printf("algo 1 ou 2 ? \n");
    scanf("%d", &algo);


    if (algo==1) algo1();


    else if (algo ==2) algo2();

    return 0;
}

