#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
//Nattan lopes antoniacci galli
typedef struct {    // Define uma estrutura chamada pessoa
    double peso;    // Declara um membro da estrutura para armazenar o peso
    int idade;      // Declara um membro da estrutura para armazenar a idade
    double altura;  // Declara um membro da estrutura para armazenar a altura
} pessoa;  // Nome da estrutura

void mostrarPessoa(pessoa p) {  // Função para imprimir os dados da pessoa, recebendo uma cópia da estrutura
    printf("Peso: %.2lf. Idade: %d. Altura: %.2lf\n", p.peso, p.idade, p.altura);  // Imprime o peso, idade e altura
}

void lerDadosPessoa(pessoa *p) {  // Função para ler os dados da pessoa, recebendo um ponteiro para a estrutura
    printf("Digite o peso: ");  // Solicita o peso ao usuário
    scanf("%lf", &p->peso);  // Lê o peso e armazena no membro peso da estrutura
    printf("Digite a idade: ");  // Solicita a idade ao usuário
    scanf("%d", &p->idade);  // Lê a idade e armazena no membro idade da estrutura
    printf("Digite a altura: ");  // Solicita a altura ao usuário
    scanf("%lf", &p->altura);  // Lê a altura e armazena no membro altura da estrutura
}

int main() {  // Função principal do programa
    pessoa pessoas[5];  // Declara um array de 5 estruturas do tipo pessoa

    for (int i = 0; i < 5; i++) {  // Loop para ler os dados de 5 pessoas
        printf("\nPessoa %d:\n", i + 1);  // Indica qual pessoa está sendo lida
        lerDadosPessoa(&pessoas[i]);  // Chama a função para ler os dados da pessoa, passando o endereço do elemento atual
    }

    for (int i = 0; i < 5; i++) {  // Loop para imprimir os dados das 5 pessoas
        printf("\nDados da pessoa %d:\n", i + 1);  // Indica qual pessoa está sendo impressa
        mostrarPessoa(pessoas[i]);  // Chama a função para imprimir os dados da pessoa, passando a cópia do elemento atual
    }

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}