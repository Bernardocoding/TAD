#ifndef FILA_H
#define FILA_H

// Definição do tipo opaco
typedef struct Fila Fila;
typedef struct No No;

// Funções de criação e destruição da fila
Fila* criarFila();
void destruirFila(Fila* fila);

// Funções de manipulação da fila
void enfileirar(Fila* fila, int valor);
int desenfileirar(Fila* fila);
int tamanhoFila(Fila* fila);
int filaVazia(Fila* fila);

#endif // FILA_H