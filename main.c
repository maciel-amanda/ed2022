#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N; //Tamanho da s�rie/vetor
    float *vet = malloc(sizeof(float)*N); //Definindo o tamanho do vetor a partir do n�mero digitado pelo usu�rio

    printf("\nQuantos numeros na sua serie (N): ");
    scanf("%d", &N);

    for(int i=0; i<N; i++){
    printf("Entre com numeros: ");
    scanf("%f", &vet[0]);
    }

    return 0;

}

