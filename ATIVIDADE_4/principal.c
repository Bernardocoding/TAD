#include <stdlib.h>
#include <stdio.h>
#include "circulo.h"
void main(){
/*crie os circulos*/
    Circulo *c1;
    c1= circ_cria(2,2,55);
    Circulo *c2;
    c2= circ_cria(2,2,5);
    float a1=circ_area(c1);
    float a2=circ_area(c2);
    int c =circ_concentricos(c1,c2);
    float r1=circ_raio(c1);
    float r2=circ_raio(c2);
    printf("\nArea dos circulos 1 e 2 : %f, %f;\nCirculos concentricos(1=True, 0=False): %d;\nRaio circulos 1 e 2 : %f, %f", a1,a2,c,r1,r2);
    circ_libera(c1);
    circ_libera(c2);
    
    
    }