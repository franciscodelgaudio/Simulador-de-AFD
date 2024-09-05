# Simulador de Autômato Finito Determinístico (AFD)
Este repositório contém uma implementação em linguagem C de um simulador de Autômato Finito Determinístico (AFD). Um AFD é uma máquina de estados finita que reconhece ou rejeita cadeias de símbolos de entrada, de acordo com um conjunto de regras definido.

## Funcionalidades
O programa oferece as seguintes funcionalidades:

**Leitura do Alfabeto:** Lê o alfabeto a partir de um arquivo de entrada.

**Leitura dos Estados:** Lê os estados a partir do mesmo arquivo de entrada.

**Leitura dos Estados Finais:** Lê os estados finais a partir do arquivo.

**Montagem da Matriz de Transição:** Preenche a matriz de transição do autômato a partir do arquivo.

**Teste de Cadeias:** Aceita ou rejeita cadeias de entrada de acordo com as regras do autômato.

## Estrutura do Código
O código é estruturado em várias funções para facilitar a legibilidade e a manutenção, incluindo:

**abrirArquivo:** Função responsável por abrir o arquivo e ler uma linha específica.

**leituraAlfabeto:** Lê o alfabeto a partir do arquivo.

**leituraEstado:** Lê os estados a partir do arquivo.

**leituraFinal:** Lê os estados finais a partir do arquivo.

**montarMatriz:** Monta a matriz de transição do autômato.

**testeAutomato:** Testa cadeias de entrada no autômato e determina se são aceitas ou rejeitadas.

**printMatriz:** Imprime a matriz de transição.

**esvaziarMatriz:** Preenche a matriz com valores padrão.

**lugarAlfabetoMatriz:** Retorna a posição de um caractere no alfabeto.

**isfinal:** Verifica se um estado é final.

**estadoToInt:** Converte estados de string para inteiros.

## Uso
Para utilizar o programa, siga estes passos:

Compile o código-fonte utilizando um compilador C, como o GCC.

Execute o programa e forneça o nome do arquivo de entrada que contém as definições do autômato.

Insira as cadeias que deseja testar no autômato.

Observe a saída do programa para verificar se as cadeias são aceitas ou rejeitadas pelo autômato.

## Exemplo de Arquivo de Entrada
Um exemplo de arquivo de entrada pode ser:

```c
alfabeto={a,b,c,0,1,2}
estados={q0,q1,q2,q3,q4,q5}
finais={q2,q5}
(q0,a)= q1
(q1,a)= q2
(q1,b)= q1
(q1,0)= q4
(q2,c)= q3
(q3,b)= q2
(q3,0)= q5
(q4,0)= q2
(q4,1)= q5
(q5,2)= q4
```

## Autor
Este código foi escrito por Francisco Castro Del’Gaudio Junior
