#include <stdio.h>
//Nattan lopes antoniacci galli

void exibirPares(int numero) {
    int i; 
    for (i = 1; i <= numero; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirPares(numero);

    return 0;
}