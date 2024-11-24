#include <stdio.h>
//Nattan lopes antoniacci galli

void exibirOrdemInversa(int vetor[], int tamanho) {
    int i;  
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    int i;  

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Números na ordem inversa:\n");
    exibirOrdemInversa(vetor, 10);

    return 0;
}