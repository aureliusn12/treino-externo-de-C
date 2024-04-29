/* Faça um programa para calcular o estoque médio de uma peça, sendo que:ESTOQUE MÉDIO = (QUANTIDADE_MÍNIMA + QUANTIDADE_MÁXIMA) / 2.*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int min, max;
float estoqueMed;

int main(){
    printf("Insira a quantidade minima: \n");
    scanf("%d", &min);
    printf("Insira a quantidade maxima: \n");
    scanf("%d", &max);

    estoqueMed = (min + max)/2;

    printf("O estoque medio e: %.1lf", estoqueMed);
}