/*3°) Faça um programa que preencha dois vetores, X e Y, com dez números inteiros cada. Calcule e mostre a união de X com Y.
Isto é, um vetor que contenha os valores de X seguidos dos valores de Y.*/

#include <stdio.h>
#define TAM 10

void main(void)
{
    int x[TAM], y[TAM], tam2 = 2 * TAM, xy[tam2];
    
    printf("Digite o primeiro vetor de tamanho 10: ");
    
    for(int i = 0; i <TAM; i++){
        scanf("%d", &x[i]);
    }
    
    printf("Digite o segundo vetor de tamanho 10: ");
    
    for(int i = 0; i <TAM; i++){
        scanf("%d", &y[i]);
    }
    
    for(int i = 0; i < TAM; i++){
        xy[i] = x[i];
        xy[i+10] = y[i];
    }
    
    printf("Resultado: ");
    for(int i = 0; i < tam2; i++){
        printf("%d\n", xy[i]);
    }
}


