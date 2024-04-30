#include <stdlib.h>
#include<stdio.h>

typedef struct No{
    int valor;/*armazena o valor do nó*/
    struct No *anterior;/* É um ponteiro que aponta para o nó anterior na pilha. Ou seja, se um nó é inserido na pilha,
     este campo aponta para o nó que foi inserido antes dele. Isso cria uma estrutura de lista encadeada, onde cada nó 
     na pilha mantém uma referência para o nó anterior.*/
}No;

typedef struct{
    No *topo;/*'topo' é um ponteiro que aponta para o topo da pilha, o no mais recente inserido na pilha*/
}Pilha; /*estrutura que contém um único termo, um ponteiro que aponta para o topo da lista*/

Pilha* cria_pilha(void){
Pilha *p=malloc(sizeof(Pilha));/*aloquei espaço dinamicamente para a estrutura pilha e 'p' possui o endereço de memória dessa estrutura*/
p->topo=NULL; /*inicialmente o topo da pilha aponta para o espaço vazio*/

return p;

}

void pilha_push(Pilha*p, int x){
    No *no=malloc(sizeof(No));/*aloquei espaço dinamicamente para a estrutura No*/
    no->valor=x;
    no->anterior=p->topo;
    p->topo=no;
}

void pilha_pop(Pilha *p){
if(p->topo!=NULL){
    int valor= p->topo->valor;/*armazena o valor do topo*/
    No *no=p->topo->anterior;/*faz o ponteiro no apontar para o anterior*/
    free(p->topo);
    p->topo=no;
    printf("%d",valor); 

}
else{
    printf("pilha vazia");
}}

void imprime_no(No *no){
    if (no!=NULL){
        printf("%d",no->valor);
        imprime_no(no->anterior);
    
    }
};
// void imprime(Pilha* pilha){
//     printf("\nValores da pilha \n");
//     imprime_no(pilha->topo);
// } não entendi 


