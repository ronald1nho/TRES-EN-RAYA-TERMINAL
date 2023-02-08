//===================================================================================================

//LIBRERIAS

#include<stdio.h>
#include<stdlib.h>
#include "data.h"
#include "display.h"

//=========================================================================================================================================

//FUNCIONES SECUNDARIAS

int asignar(int x, char tablero[3][3], char a){

    switch(x){
        case 1:
            tablero[0][0] = a;
            break;
        case 2:
            tablero[0][1] = a;
            break;
        case 3:
            tablero[0][2] = a;
            break;
        case 4:
            tablero[1][0] = a;
            break;
        case 5:
            tablero[1][1] = a;
            break;
        case 6:
            tablero[1][2] = a;
            break;
        case 7:
            tablero[2][0] = a;
            break;
        case 8:
            tablero[2][1] = a;
            break;
        case 9:
            tablero[2][2] = a;
            break;
        default:
            printf("INVALID INPUT\n\n");
            return 0;
    }

    return 0;
}

void scan(int *x){
    int res;
    do{
        printf("INTRODUCE LA CASILLA: ");
        scanf("%d", &res);
    }while(res<1 && res>9);
    
    *x = res;
}
