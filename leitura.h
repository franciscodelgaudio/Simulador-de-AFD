#ifndef LEITURA_H
#define LEITURA_H

// Função: abrirArquivo
// Pré-condição: A função recebe um ponteiro para uma string e o número da linha a ser lida.
// Pós-condição: A função lê a linha especificada de um arquivo e armazena seu conteúdo na string.
int abrirArquivo(char *palavra, int linha);

// Função: leituraAlfabeto
// Pré-condição: A função recebe um array para armazenar o alfabeto, o nome do arquivo e um ponteiro para o tamanho do alfabeto.
// Pós-condição: A função lê o alfabeto a partir de um arquivo e o armazena no array, atualizando o tamanho do alfabeto.
void leituraAlfabeto (char alfabeto [], char * arquivo, int * tamA);

// Função: leituraEstado
// Pré-condição: A função recebe um array para armazenar os estados, o nome do arquivo e um ponteiro para o tamanho dos estados.
// Pós-condição: A função lê os estados a partir de um arquivo e os armazena no array, atualizando o tamanho dos estados.
void leituraEstado (char estado [], char * arquivo, int * tamE);

// Função: leituraFinal
// Pré-condição: A função recebe um array para armazenar os estados finais, o nome do arquivo e um ponteiro para o tamanho dos estados finais.
// Pós-condição: A função lê os estados finais a partir de um arquivo e os armazena no array, atualizando o tamanho dos estados finais.
void leituraFinal (char final [], char * arquivo, int * tamF);

#endif