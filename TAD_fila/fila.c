#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int valor;
    struct No *proximo;
}No;

typedef struct{
    No *inicio;
    No *final;
}Fila;

Fila* cria_fila(void){
    Fila *f =malloc(sizeof(Fila));
    f->inicio=NULL;
    f->final=NULL;
    return f;
}

void enfileira(Fila *f, int x){
    No *no=malloc(sizeof(No));
    no->valor=x;
    no->proximo=NULL;
    if(f->inicio==NULL){/* inicialmente fazemos o inicio e o fim apontyar para o primeiro no*/
        f->inicio=no;/*uma vez que o inicio aponto para o no inicial não fazemos mais nada com esse ponteiro*/
    }
    else{

        f->final->proximo=no;/* fazemos o ponteiro proximo do anterior que estava apontando para NULL apontar para o novo no inserido*/
    }
    f->final=no;/*fazemos o ponteiro final a pontar para o No final*/

}
int desinfileira(Fila*f){
    if(f->inicio!=NULL){
    int valor=f->inicio->valor;
    No *no=f->inicio->proximo;
    free(f->inicio);
    f->inicio=no;
    printf("\t%d\n ",valor);
    }
    else{
        printf("Pilha vazia");
    }

}
/*QUAL A SACADA PARA IMPRIMIR OS VALORES DA FILA?
1-Imprimir o valor do inicio
2-Precisamos imprimir o valor do proximo nó, porém o inicio que aponta para o no inicial possui o 
o ponteiro para o próximo nó, então devemos criar uma função que que recebe como parametro 
o ponteiro do proximo nó( struct No * proximo) imprime o valor do próximo nó

*/
void imprimi_nos(No*no){
    if (no!=NULL){
        printf("%d, ", no->valor);
        imprimi_nos(no->proximo);
    }
}
void imprimi_fila(Fila *f){
    if (f!=NULL){
   printf("%d, ", f->inicio->valor);
    imprimi_nos(f->inicio->proximo);
    }
}


void main(){
    
    Fila *f=cria_fila();
    enfileira(f,1);
    enfileira(f,2);
    enfileira(f,3);
    enfileira(f,4);
    enfileira(f,5);
    desinfileira(f);
    desinfileira(f);
    desinfileira(f);
    desinfileira(f);
    desinfileira(f);
    desinfileira(f);
    imprimi_fila(f);
    



}