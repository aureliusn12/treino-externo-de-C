/*Ler quatro valores numéricos inteiros e apresentar o resultado dois a dois da adição e multiplicação entre os
valores lidos, baseando-se na utilização do conceito de propriedade distributiva. Dica: se forem lidas as variáveis
A, B, C e D, devem ser somados e multiplicados os valores de A com B, A com C e A com D; depois B com C, B
com D e por último C com D. Note que para cada operação serão utilizadas seis combinações. Assim sendo,
devem ser realizadas doze operações de processamento, sendo seis para as adições e seis para as multiplicações. */

#include <stdlib.h>
#include <stdio.h>

int numero1, numero2, numero3, numero4, resultado;

int main (){
    printf("Insira o 1 valor inteiro: \n");
    scanf("%d", &numero1);
    printf("Insira o 2 valor inteiro: \n");
    scanf("%d", &numero2);
    printf("Insira o 3 valor inteiro: \n");
    scanf("%d", &numero3);
    printf("Insira o 4 valor inteiro: \n");
    scanf("%d", &numero4);

    int soma = numero1+numero2; numero1+numero3; numero1+numero4; numero2+numero3; numero2+numero4; numero3+numero4;
    int multiplicacao = numero1*numero2; numero1*numero3; numero1*numero4; numero2*numero3; numero2*numero4; numero3*numero4;

    printf("Os resultados sao:%d %d",soma, multiplicacao);

}