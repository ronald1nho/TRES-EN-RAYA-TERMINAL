//===================================================================================================

//LIBRERIAS

#include<stdio.h>
#include<stdlib.h>
#include "data.h"
#include "display.h"

//=========================================================================================================================================

//FUNCIONES SECUNDARIAS

void table(char tablero[3][3]){

    printf("-------------\n");
    printf("| %c | %c | %c |\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tablero[2][0], tablero[2][1], tablero[2][2]);
    printf("-------------\n\n");

}