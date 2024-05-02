/*Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz
12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média.
Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE.
Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a
fórmula: LITROS_USADOS = DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
tempo gasto, a distância percorrida e a quantidade de litros utilizada na viagem. Dica: trabalhe com valores reais*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tempo, velocidade, distancia;
float litros;

int main (){
    printf("Insira o tempo gasto na viagem (em horas): \n");
    scanf("%d", &tempo);
    printf("Insira a velocidade media (em km/h): \n");
    scanf("%d", &velocidade);

distancia = tempo*velocidade;
litros = distancia/12;

printf("A distancia aproximada percorrida e: %d km\n", distancia);
printf("Velocidade media: %d km/h \nTempo gasto: %d horas \nLitros usados: %.1lf L\n", velocidade, tempo, litros);

} 