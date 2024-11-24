#include <stdio.h>

// Nattan lopes antoniacci galli
void encontrarMaiorValor(int vetor[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = vetor[0];
    *posicao = 0;
    int i;  
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > *maiorValor) {
            *maiorValor = vetor[i];
            *posicao = i;
        }
    }
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

    int maiorValor, posicao;
    encontrarMaiorValor(vetor, tamanho, &maiorValor, &posicao);

    printf("O maior valor é: %d\n", maiorValor);
    printf("A posição do maior valor no vetor é: %d\n", posicao);

    return 0;
}