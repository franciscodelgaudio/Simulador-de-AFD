#ifndef FUNCIONAIS_H
#define FUNCIONAIS_H
#define MAX 100

// Função: charToInt
// Pré-condição: A função recebe um caractere.
// Pós-condição: A função converte o caractere para seu valor inteiro correspondente.
int charToInt(char c);

// Função: contadorDeLinhas
// Pré-condição: A função recebe o nome de um arquivo.
// Pós-condição: A função conta o número de linhas no arquivo e retorna esse valor.
int contadorDeLinhas (char * arquivo);

// Função: esvaziarMatriz
// Pré-condição: A função recebe uma matriz, o número de linhas e o número de colunas da matriz.
// Pós-condição: A função preenche a matriz com valores padrão, esvaziando-a.
void esvaziarMatriz (int matriz [][MAX], int l, int c);

// Função: printMatriz
// Pré-condição: A função recebe uma matriz, o número de linhas e o número de colunas da matriz.
// Pós-condição: A função imprime a matriz.
void printMatriz (int matriz [][MAX], int l, int c);

// Função: lugarAlfabetoMatriz
// Pré-condição: A função recebe um array representando o alfabeto, um caractere e o tamanho do alfabeto.
// Pós-condição: A função retorna a posição do caractere no alfabeto.
int lugarAlfabetoMatriz (char alfabeto [], char y, int tamA);

// Função: isfinal
// Pré-condição: A função recebe um estado e um array representando os estados finais.
// Pós-condição: A função verifica se o estado dado é final ou não e retorna um valor booleano.
int isfinal (int l, char final[]);

// Função: estadoToInt
// Pré-condição: A função recebe um array representando os estados, um array para armazenar os estados convertidos em inteiros e o tamanho do array de estados.
// Pós-condição: A função converte os estados de string para inteiros e os armazena em um novo array.
void estadoToInt (char estado[], int estadoInt[], int tamE);

#endif