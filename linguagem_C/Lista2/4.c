
#include <stdio.h>
//Nattan lopes antoniacci galli

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;
    int i;  
    for (i = 0; i < tamanho; i++) {
        soma += notas[i];
    }
    return soma / tamanho;
}

int main() {
    float notas[4];
    int tamanho = 4;
    int i;  

    for (i = 0; i < tamanho; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcularMedia(notas, tamanho);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
