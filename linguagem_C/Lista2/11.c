#include <stdio.h>
//Nattan lopes antoniacci galli
int menorNumero(int num1, int num2, int num3) {
    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    return menor;
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int menor = menorNumero(num1, num2, num3);
    printf("O menor número é: %d\n", menor);

    return 0;
}