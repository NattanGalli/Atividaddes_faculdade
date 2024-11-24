#include <stdio.h>

// Nome: Nattan lopes antoniacci galli
int somaNumVet(int notas[], int tamanho);

int main() {
    int notas[3];
    
    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &notas[0], &notas[1], &notas[2]);

    int soma = somaNumVet(notas, 3);

    return 0;
}


int somaNumVet(int notas[], int tamanho) {
    int cont = 0;


    for (int i = 0; i < tamanho; i++) {
        cont += notas[i];
    }
	printf("A soma dos numeros e: %d\n", cont);
    return cont;
}
