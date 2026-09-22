#include <stdio.h>


int main(){
    float moyenne = 10;

    if (moyenne < 10) {
        printf("recalé");
    }

    else if (10 <= moyenne && moyenne < 12) {
        printf("passable");
    }

    else if (12 <= moyenne && moyenne < 14){
        printf(" assez bien");
    }

    else if (14 <= moyenne && moyenne < 16){
        printf("bien");
    }

    else if (16 <= moyenne){
        printf("tres bien");
    }

    return 0;
}