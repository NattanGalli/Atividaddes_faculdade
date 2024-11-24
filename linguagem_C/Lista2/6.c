#include <stdio.h>

// Nattan lopes antoniacci galli
int somarValores(int vetor[], int tamanho) {
    int soma = 0;
    int i;  
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
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

    int soma = somarValores(vetor, tamanho);
    float media = (float)soma / tamanho;

    printf("Soma dos valores: %d\n", soma);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}