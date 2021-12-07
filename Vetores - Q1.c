//1°) Escreva um programa que recebe um vetor de 10 elementos do usuário e escreve a média dos valores no vetor.

#include <stdio.h>
#define TAM 10
void main(void)
{
    float vet[TAM], total = 0;
    
    printf("Digite dez números para que a média dos valores seja calculada: ");
    for(int i = 0; i < TAM; i++){
        scanf("%f", &vet[i]);
        total = total + vet[i];
    }
    printf("A média dos valores recebidos e: %0.2f ", total/TAM);
}


