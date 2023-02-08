//=========================================================================================================================================

//LIBRERIAS

#include<stdio.h>
#include<stdlib.h>
#include "data.h"
#include "display.h"

//=========================================================================================================================================

//FUNCION MAIN

int main(){

    //VARIABLES
    char tablero[3][3];
    int r1;
    char x = 'x';
    char o = 'o';
    int i = 0;

    //INICIALIZACION DEL TABLERO
    tablero[0][0] = ' ';
    tablero[0][1] = ' ';
    tablero[0][2] = ' ';
    tablero[1][0] = ' ';
    tablero[1][1] = ' ';
    tablero[1][2] = ' ';
    tablero[2][0] = ' ';
    tablero[2][1] = ' ';
    tablero[2][2] = ' ';

    //SCRIPT
    system("cls");

    printf("INSTRUCCIONES DEL TABLERO\n\n");

    printf("-------------\n");
    printf("| 1 | 2 | 3 |\n");
    printf("-------------\n");
    printf("| 4 | 5 | 6 |\n");
    printf("-------------\n");
    printf("| 7 | 8 | 9 |\n");
    printf("-------------\n\n");

    do{
        scan(&r1);
        asignar(r1, tablero, x);
        system("cls");
        table(tablero);
        i++;

        scan(&r1);
        asignar(r1, tablero, o);
        system("cls");
        table(tablero);
        i++;
    }while(i<=8);

    return 0;
}

//=========================================================================================================================================================