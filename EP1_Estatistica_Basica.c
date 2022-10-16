#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
/*====ENTRADA DE DADOS==============================================================================================================*/

    int N; // Variável referente à série/vetor.
    float *vet = malloc(sizeof(float)*N); // Define o tamanho do vetor e o nº de bytes a serem alocados em memória.

    printf("Quantos numeros na sua serie (N): ");
    scanf("%d", &N); // Função que capta a entrada de dados do usuário e define o tamanho da série/vetor.

    printf("\nEntre com numeros: \n");
    for(int i=0; i<N; i++){ // Laço que percorre todos os ídices do vetor.
    scanf("%f", &vet[i]); // Função que capta as entradas de nºs da série/vetor e aloca em índices.
    }

/*====MAIOR E MENOR=================================================================================================================*/

    float maior= vet[0];
    float menor= vet[0];

    for(int i=0; i<N; i++){ // Laço que percorre os índices do vetor.
        if (vet[i]<menor) // Compara os valores defindindo o menor.
        menor=vet[i];
        if(vet[i]>maior) // compara os valores definindo o maior.
        maior=vet[i];
        }
    printf("\nValor minimo: %.1f\nValor maximo: %.1f\n", menor, maior);

/*====MÉDIA=========================================================================================================================*/

    float soma = 0;
    float media = 0;

    for (int i=0; i<N; i++){ // Laço que percorre os indices.
        soma = soma+vet[i]; // Soma os valores em cada índice.
    }
    media = soma/N; // Cálculo da média.
    printf("Media: %.2f\n", media);

/*====MEDIANA=======================================================================================================================*/

    float mediana = 0;

     for(int i=0; i<N-1; i++){ // Ordenação dos vetores (comparando o vetor original e ordenado).
        for(int j=i+1; j<N; j++){

            if(vet[i] > vet[j]){

                float aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    if(N%2){ // Considera o resto da divisão por 2.
         mediana = vet[N/2]; // Se N par considera o valor central.
    } else {
         mediana = (vet[N/2-1]+vet[N/2])/2;// Se N ímpar calcula média dos dois valores centrais.
    }
    printf("Mediana: %.2f \n", mediana);


/*====DESVIO PADRÃO (POPULACIONAL)==================================================================================================*/

      float variancia = 0;

      for (int i=0; i<N; i++) { // laço que percorre os números nos índices.
        float num = vet[i] - media; // Subtrai os números (nos índices) da média => desvios.
        variancia += num * num; // Calcula o quadrado dos desvios (multiplando cada número por ele mesmo) e depois soma.
      }
       float dp = sqrt(variancia/N); // Cálculo da raiz quadrada da variância dividida pelo total de números da série(N).
       printf("Desvio Padrao Populacional: %.13f\n", dp);

return 0;

}
