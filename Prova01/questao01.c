/*Faça um algoritmo em que receba o tamanho do raio de um círculo e faça o cálculo do
diâmetro, do perímetro e da área do círculo. Calcule também o volume se esse círculo fosse
a base para se criar uma esfera. */

#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada01(float *raio){
    printf("Informe o tamanho do raio: ");
    scanf("%f", raio);
}

void processamento01(float *raio, float *diametro, float *perimetro, float *area, float *volume){
    *perimetro = 2 * 3.14 * (*raio);
    *area = 3.14 * (*raio) * (*raio);
    *diametro = 2 * (*raio);
    *volume = (4/3) * 3.14 * (*raio) * (*raio) * (*raio);
}

void saida01( float diametro, float perimetro, float area, float volume){
    printf("DIAMETRO: %.2f\n", diametro);
    printf("PERIMETRO : %.2f\n", perimetro);
    printf("AREA : %.2f\n", area);
    printf("VOLUME : %.2f\n", volume);
}

void questao1(void){
    float RAIO, DIAMETRO, PERIMETRO, AREA, VOLUME;

    entrada01(&RAIO);
    processamento01(&RAIO, &DIAMETRO, &PERIMETRO, &AREA, &VOLUME);
    saida01(DIAMETRO, PERIMETRO, AREA, VOLUME);


}
