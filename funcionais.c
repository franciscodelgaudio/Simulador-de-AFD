#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "funcionais.h"
#include "leitura.h"

#define MAX 100

int charToInt(char c) {
    return c - '0';
}

int contadorDeLinhas (char * arquivo) {
    FILE *f = fopen(arquivo, "r");
    int count = 0;
    char ch;
    while ((ch = fgetc(f)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    fclose(f);
    return count + 1;
}

void esvaziarMatriz (int matriz [][MAX], int l, int c){
    for (int i = 0 ; i < l ; i++){
        for (int j = 0 ; j < c ; j++){
            matriz [i][j] = -1;
        }
    }
}

void printMatriz (int matriz [][MAX], int l, int c){
    for (int i = 0 ; i < l ; i++){
        for (int j = 0 ; j < c ; j++){
            printf ("%3d ", matriz[i][j]);
        }
        printf ("\n");
    }
}

int lugarAlfabetoMatriz (char alfabeto [], char y, int tamA){
    for (int i = 0 ; i <= tamA ; i++){
        if (alfabeto[i] == y){
            return i;
        }
    }
}

int isfinal (int l, char final[]){
    for (int i = 0 ; final[i] != '\0'; i++){
        if (l == charToInt(final[i])) return 1;
    }
    return 0;
}

void estadoToInt (char estado[], int estadoInt[], int tamE){
    for (int i = 0 ; i < tamE ; i++){
        estadoInt [i] = charToInt(estado[i]);
    }
}