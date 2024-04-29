/*Faça um programa para pagamento de comissão de vendedores de peças, levando-se em consideração que sua
comissão será de 5% do total da venda e que você tem os seguintes dados:
- Identificação do vendedor
- Código da peça
- Preço unitário da peça
- Quantidade vendida*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char nome [50];
char codigo [30];
float valorPeca, comissao;
int quantidade;


int main (){
    printf("Insira seu nome: \n");
    gets(nome);
    printf("Insira o codigo da peca: \n");
    gets(codigo);
    printf("Insira o preco unitario da peca: \n");
    scanf("%f", &valorPeca);
    printf("Insira a quantidade de pecas vendidas: \n");
    scanf("%d", &quantidade);
    fflush(stdin);

    comissao = (valorPeca*quantidade)/20;

    printf("%s, sua comissao e de %.2lf reais",nome, comissao);
}