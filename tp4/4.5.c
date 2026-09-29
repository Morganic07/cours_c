#include <stdio.h>


int main(){

    int x = 2;

    int n = 3;

    int result =1;

    
    for (int i=1; i<=n; i+=1){
        result *= x;
        printf("%d \n", result);
    }

    return 0;
}