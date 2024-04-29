/* Faça um programa que:
- Leia a cotação do dólar
- Leia um valor em dólares
- Converta esse valor para Real
- Mostre o resultado */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float cotacao, real, dolar;

int main (){
printf("Insira o valor em dolar: \n");
scanf("%f", &dolar);
printf("Insira a cotacao do dolar atual: \n", cotacao);
scanf("%f", &cotacao);

real = dolar*cotacao;

printf("Calculando... \n");
printf("A quantia convertida para real e: %.2lf", real);

}