/*Crie um algoritmo que após receber o Salário Bruto, calcule o salário líquido descontando
10% quando o salário bruto for menor que R$ 2000, caso contrário descontar 20%. No
final, exiba o salário líquido. */

#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(float *salario_bruto){
    printf("Informe seu salario bruto: ");
    scanf("%f", salario_bruto);
}

void processamento02(float *salario_bruto, float *salario_liquido){
    if(*salario_bruto < 2000){
        *salario_liquido = *salario_bruto - (*salario_bruto * 10/100);
    }
    else{
         *salario_liquido = *salario_bruto - (*salario_bruto * 20/100);
    }
}

void saida02(float salario_liquido){
    printf("Seu salario liquido e : %.2f\n", salario_liquido);

}

void questao2(void){
    float salarioBruto, salarioLiquido;

    entrada02(&salarioBruto);
    processamento02(&salarioBruto, &salarioLiquido);
    saida02(salarioLiquido);


}


