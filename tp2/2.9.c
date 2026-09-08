#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d;
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    d = a;
    a = b;
    b = c;
    c = d;

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
    

}