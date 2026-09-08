#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c;
    printf("a = %d\nb = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
