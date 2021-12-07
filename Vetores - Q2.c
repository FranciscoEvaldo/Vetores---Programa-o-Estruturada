/* 2°)Escreva um programa que recebe um vetor de 10 elementos do usuário e diz qual o maior número e qual o 
menor número do vetor.*/

#include <stdio.h>
#define TAM 10

void main(void)
{
    float vet[TAM], maior_n = 0.0, menor_n = 0.0;
    
    printf("Digite dez números para que o programa possa lhe informar qual o maior e o menor número que foi digitado: ");
    for(int i = 0; i < 10; i++){
        scanf("%f", &vet[i]);
        if(i == 0){
            maior_n = menor_n = vet[i];
        }
        if(vet[i] > maior_n){
            maior_n = vet[i];
        }
        else if(vet[i] < menor_n){
            menor_n = vet[i];
        }
    }
    printf("O maior número e: %0.2f ", maior_n);
    printf("O menor número e: %0.2f ", menor_n);
}



