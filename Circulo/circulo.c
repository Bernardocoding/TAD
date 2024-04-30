#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct{ // o typedef struct não aloca memória por si só, 'ELE SÓ TA AVISANDO O TIPO'
float x, y, r;
} Circulo;


/* Cria um circulo com centro (x,y) e raio r
  @param x cordenada x do centro 
  @param y cordenada y do centro
  @return um ponteiro que aponta para o Circulo
 */
Circulo* circ_cria(float x, float y, float r){
Circulo *c= malloc(sizeof(Circulo)); // malloc reserva espaço na memória e retorna o endereço de memória
 c->x=x;
 c->y=y;
 c->r=r;


return c;
}

/* Libera a memoria de um Circulo 
@param Circulo *c ponteiro que aponta para o circulo
*/
void circ_libera(Circulo *c){
    free(c);
}
/* Calcula a area de um circulo (PI=3.14)
@param Circulo *c ponteiro que aponta para o circulo
 */
float circ_area(Circulo *c){
    float area;
    area=pow(c->r ,2)* 3.14; // a "->" serve para eu acessar o campo de uma estrutura a partir de um ponteiro
    return area;
    
}
/* Verifica se dois circulos tem o mesmo centro 
@param Circulo *c ponteiro que aponta para o circulo
@param Circulo *c ponteiro que aponta para o circulo
*/
int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1->x == c2->x && c1->y == c2->y){
        return 1;
    }
    else{
        return 0;
    }

}
/* Obtem o raio de um circulo 
@param Circulo *c ponteiro que aponta para o circulo
*/
float circ_raio(Circulo *c){
    return c->r;

}


