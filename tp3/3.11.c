#include <stdio.h>


int main(){
    int richter;

    scanf("%d", &richter);

    switch(richter){
        case 1:
            printf("Micro-séisme impossible à ressentir.");
            break;
        case 2:
            printf("Micro-séisme impossible à ressentir mais enregistrable par les sismomètres.");
            break;
        case 3:
            printf("Ne cause pas de dégats mais commence à pouvoir être légèrement ressenti.");
            break;
        case 4:
            printf("Séisme capable de faire bouger des objets mais ne causant généralement pas de dégats.");
            break;
        case 5:
            printf("Séisme capable d'engendrer des dégats importants sur de vieux bâtiments ou bien des bâtiments présentants des défauts de construction. Peu de dégats sur des bâtiments modernes.");
            break;
        case 6:
            printf("Fort séisme capable d'engendrer des destructions majeures sur une large distance (180 km) autour de l'épicentre.");
            break;
        case 7:
            printf("Séisme capable de destructions majeures à modérées sur une très large zone en fonction de la distance.");
            break;
        case 8:
            printf("Séisme capable de destructions majeures sur une très large zone de plusieurs centaines de kilomètres.");
            break;
        case 9:
            printf("Séisme capable de tout détruire sur une très vaste zone.");
            break;
        case richter>9:
            printf("apocalypse.");
            break;
        default:
            printf("Valeur incorrecte");
    }


    return 0;
}