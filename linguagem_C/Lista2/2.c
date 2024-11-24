#include <stdio.h>

// Definição da estrutura pessoa
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

// Função para mostrar os dados da pessoa
void mostrarPessoa(pessoa p) {
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf\n", p.peso, p.idade, p.altura);
}

// Função para ler os dados da pessoa
void lerDadosPessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

int main() {
    pessoa pessoas[5];
    int i;

    // Loop para ler os dados de 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        lerDadosPessoa(&pessoas[i]);
    }

    // Loop para imprimir os dados das 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);
        mostrarPessoa(pessoas[i]);
    }

    return 0;
}