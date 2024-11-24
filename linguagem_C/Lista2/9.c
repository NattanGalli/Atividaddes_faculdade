#include <stdio.h>
//Nattan lopes antoniacci galli

int multiplicarVetor(int vetor[], int tamanho) {
    int resultado = 1;
    int i;  
    for (i = 0; i < tamanho; i++) {
        resultado *= vetor[i];
    }
    return resultado;
}

int main() {
    int tamanho;
    int i; 
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = multiplicarVetor(vetor, tamanho);

    printf("Resultado da multiplicação: %d\n", resultado);

    return 0;
}