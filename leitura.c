#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "leitura.h"
#include "funcionais.h"

#define MAX 100

int abrirArquivo(char *palavra, int linha){
    FILE * f;
    f = fopen("afd.txt", "r");
    int cont=0;
    while(cont!=linha){
        fgets(palavra, 100, f);
        cont++;
    }
    fclose(f);
    return 0;
}

void leituraAlfabeto (char alfabeto [], char * arquivo, int * tamA){
    * tamA = 0;
    char linhaUm [MAX];
    FILE *f;
    f = fopen (arquivo, "r");
    fscanf(f, "alfabeto={");
    fscanf(f, "%[^\n]", linhaUm);
    for(int i = 0 ; linhaUm[i] != '}' ; i++){
        if (isalpha (linhaUm[i]) || isdigit (linhaUm[i])){
            alfabeto[* tamA] = linhaUm[i];
            (* tamA)++;
        }
    }
    fclose (f);
}

void leituraEstado (char estado [], char * arquivo, int * tamE){
    * tamE = 0;
    char linhaDois [MAX];
    abrirArquivo (linhaDois, 2);
    for (int i = 0 ; linhaDois[i] != '}' ; i++){
        if (isdigit(linhaDois[i])){
            estado[*tamE] = linhaDois[i];
            (*tamE)++;
        }
    }
}

void leituraFinal (char final [], char * arquivo, int * tamF){
    * tamF = 0;
    char linhaTres [MAX];
    abrirArquivo (linhaTres, 3);
    for (int i = 0 ; linhaTres[i] != '}' ; i++){
        if (isdigit(linhaTres[i])){
            final [*tamF] = linhaTres[i];
            (*tamF)++;
        }
    }
}