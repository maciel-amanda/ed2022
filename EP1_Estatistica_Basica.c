#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
/*====ENTRADA DE DADOS==============================================================================================================*/

    int N; // Vari�vel referente � s�rie/vetor.
    float *vet = malloc(sizeof(float)*N); // Define o tamanho do vetor e o n� de bytes a serem alocados em mem�ria.

    printf("Quantos numeros na sua serie (N): ");
    scanf("%d", &N); // Fun��o que capta a entrada de dados do usu�rio e define o tamanho da s�rie/vetor.

    printf("\nEntre com numeros: \n");
    for(int i=0; i<N; i++){ // La�o que percorre todos os �dices do vetor.
    scanf("%f", &vet[i]); // Fun��o que capta as entradas de n�s da s�rie/vetor e aloca em �ndices.
    }

/*====MAIOR E MENOR=================================================================================================================*/

    float maior= vet[0];
    float menor= vet[0];

    for(int i=0; i<N; i++){ // La�o que percorre os �ndices do vetor.
        if (vet[i]<menor) // Compara os valores defindindo o menor.
        menor=vet[i];
        if(vet[i]>maior) // compara os valores definindo o maior.
        maior=vet[i];
        }
    printf("\nValor minimo: %.1f\nValor maximo: %.1f\n", menor, maior);

/*====M�DIA=========================================================================================================================*/

    float soma = 0;
    float media = 0;

    for (int i=0; i<N; i++){ // La�o que percorre os indices.
        soma = soma+vet[i]; // Soma os valores em cada �ndice.
    }
    media = soma/N; // C�lculo da m�dia.
    printf("Media: %.2f\n", media);

/*====MEDIANA=======================================================================================================================*/

    float mediana = 0;

     for(int i=0; i<N-1; i++){ // Ordena��o dos vetores (comparando o vetor original e ordenado).
        for(int j=i+1; j<N; j++){

            if(vet[i] > vet[j]){

                float aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    if(N%2){ // Considera o resto da divis�o por 2.
         mediana = vet[N/2]; // Se N par considera o valor central.
    } else {
         mediana = (vet[N/2-1]+vet[N/2])/2;// Se N �mpar calcula m�dia dos dois valores centrais.
    }
    printf("Mediana: %.2f \n", mediana);


/*====DESVIO PADR�O (POPULACIONAL)==================================================================================================*/

      float variancia = 0;

      for (int i=0; i<N; i++) { // la�o que percorre os n�meros nos �ndices.
        float num = vet[i] - media; // Subtrai os n�meros (nos �ndices) da m�dia => desvios.
        variancia += num * num; // Calcula o quadrado dos desvios (multiplando cada n�mero por ele mesmo) e depois soma.
      }
       float dp = sqrt(variancia/N); // C�lculo da raiz quadrada da vari�ncia dividida pelo total de n�meros da s�rie(N).
       printf("Desvio Padrao Populacional: %.13f\n", dp);

return 0;

}
