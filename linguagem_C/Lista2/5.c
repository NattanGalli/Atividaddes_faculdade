
#include <stdio.h>
//Nattan lopes antoniacci galli

void exibirImpares(int n) {
    int i; 
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirImpares(numero);

    return 0;
}
