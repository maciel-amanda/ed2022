#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Definindo entrada de dados:

    int N; //Tamanho da vetor/s�rie
    float *vet = malloc(sizeof(float)*N); //Definindo o tamanho do vetor a partir do n�mero digitado pelo usu�rio. considerando o tamanho de n�s float

    printf("\nQuantos numeros na sua serie (N): ");
    scanf("%d", &N); //Fun��o que capta a entrada referente ao tamanho do vetor

    printf("\nEntre com numeros: ");
    for(int i=0; i<N; i++){ //"for" para caminhar pelos �ndices do vetor agregando os valores digitados pelo unu�rio
    scanf("%f", &vet[i]);//fun��o que capta todos os n�meros que ir�o compor a s�rie/vetor (preenchendo os �ndices)

    }
    //Maior e Menor

    float maior= vet[0];
    float menor= vet[0];
    for(int i=0; i<N; i++){
        if (vet[i]<menor)
        menor=vet[i];
        if(vet[i]>maior)
        maior=vet[i];
        }
    printf("\nValor minimo: %.1f\nValor maximo: %.1f\n", menor, maior);

    // M�dia

    float soma = 0;
    float media = 0;
    for (int i=0; i<N; i++){
        soma = soma+vet[i];
    }
    media = soma/N;
    printf("Media: %.2f\n", media);

    //mediana
    float mediana = 0;
     for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){

            if(vet[i] > vet[j]){

                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    if(N%2){
         mediana = vet[N/2];
    } else {
         mediana = (vet[N/2-1]+vet[N/2])/2;
    }
    printf("Mediana: %.2f \n", mediana);

   // Desvio padr�o



return 0;











}
