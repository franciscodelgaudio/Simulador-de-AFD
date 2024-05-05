#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "leitura.h"
#include "funcionais.h"

#define MAX 100

// Função: montarMatriz
// Pré-condição: A função recebe uma matriz vazia, um array representando o alfabeto, e o tamanho do alfabeto.
// Pós-condição: A função preenche a matriz com as transições do autômato lendo de um arquivo.
void montarMatriz (int matriz [][MAX], char alfabeto [], int tamA){
    char aux [MAX];
    FILE * f;
    f = fopen ("afd.txt", "r");
    char x, y, z;
    for (int i = 4 ; i <= contadorDeLinhas("afd.txt") ; i++){
        abrirArquivo(aux, i);
        for (int j = 0 ; aux[j] != '\n' ; j++){
            if (aux[j+1] == ',') x = aux[j];
            if (aux[j-1] == ',') y = aux [j];
            if (aux[j-2] == ' ') z = aux [j]; 
        }
        matriz [charToInt (x)][lugarAlfabetoMatriz (alfabeto, y, tamA)] = charToInt (z);
    }
    fclose (f);
}


// Função: testeAutomato
// Pré-condição: A função recebe uma cadeia de entrada, o alfabeto, o tamanho do alfabeto, a matriz de transição do autômato, e os estados finais.
// Pós-condição: A função simula o autômato determinístico e imprime se a cadeia é aceita ou rejeitada.
void testeAutomato (char x[], char alfabeto [], int tamA, int matriz [][MAX], char final []){
    int i, l, c;
    l = 0;
    char aux [MAX];
    strcpy(aux, x);
    for (i = 0 ; x[i] ; i++){
        printf("[q%d] %s\n", l, aux + i);
        if(x[i] != '@'){
            c = lugarAlfabetoMatriz (alfabeto, x[i], tamA);
            l = matriz [l][c];
            if (l == -1){
                printf("REJEITA\n\n");
                break;
            }
            if (x[i+1] == '\0' && !isfinal (l, final)){
                printf("REJEITA\n\n");
                break;
            }
            if (x[i+1] == '\0' && isfinal (l, final)){
                printf("[q%d]\n", l);
                printf("ACEITA\n\n");
                break;
            }
        }
        else if(x[i] == '@' && x[i+1] == '\0' ){
            if(isfinal (l, final)){
                printf("[q%d]\n", l);
                printf("ACEITA\n\n");
                break;
            }
            else{
                printf("REJEITA\n\n");
                break;
            } 
        }
    }
}

int main (){
    int tamA, tamE, tamF, estadoInt [MAX], matriz [MAX][MAX];
    char final [MAX], x[MAX], estado [MAX], alfabeto [MAX], arquivo[MAX];
    printf("Escreva o nome do arquivo: ");
    scanf ("%[^\n]%*c", arquivo);
    printf("\n");
    leituraAlfabeto (alfabeto, arquivo, &tamA);
    leituraEstado (estado, arquivo, &tamE);
    leituraFinal (final, arquivo, &tamF);
    estadoToInt (estado, estadoInt, tamE);
    esvaziarMatriz (matriz, MAX, MAX);
    montarMatriz (matriz, alfabeto, tamA);
    while (scanf("%s", x) != EOF){
        testeAutomato (x, alfabeto, tamA, matriz, final);
    }
}
