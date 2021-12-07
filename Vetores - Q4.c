/*4°) Faça um programa que preencha um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. 
O primeiro vetor resultante deve conter os números positivos; o segundo deve conter os números negativos.
Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser completamente utilizadas.*/

#include <stdio.h>
#define TAM 8

void main(void)
{
    int x[TAM], y[TAM], z[TAM], i = 0;
    
    printf("Digite um vetor de %d números: ", TAM);
    
    for(i = 0; i <TAM; i++){
        scanf("%d", &x[i]);
    }
    
    printf("O vetor resultante de números positivos e: ");
    for(i = 0; i < TAM; i++){
        if(x[i] > 0){
            y[i] = x[i];
            printf("\n%d", y[i]);
        }
    }
    
    printf("\nO vetor resultante de números negativos e: ");
    for(i = 0; i < TAM; i++){
        if(x[i] < 0){
            z[i] = x[i];
            printf("\n%d", z[i]);
        }
    }
}

