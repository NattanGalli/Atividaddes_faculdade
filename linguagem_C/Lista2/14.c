#include <stdio.h>
// Nattan Lopes Antoniacci Galli

int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main() {
    int vetor[10];
    int soma = 0;
    int i;

    for (i = 0; i < 10; i++) {
        vetor[i] = i + 1;
        soma += vetor[i];
    }

    int primeiroValor = vetor[0];
    int ultimoValor = vetor[9];

    int resultado = calcularResultado(soma, primeiroValor, ultimoValor);
    printf("Resultado: %d\n", resultado);

    return 0;
}