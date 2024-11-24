#include <stdio.h>
// Nome: Nattan lopes antoniacci galli
int main()
{
    int num, Termo1 = 0, Termo2 = 1, Termo3;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Sequência de Fibonacci: %d, %d", Termo1, Termo2);

    for (int i = 0; i <= num; i++){
        Termo3 = Termo1 + Termo2;
        printf(", %d", Termo3);

        Termo1 = Termo2;
        Termo2 = Termo3;
    }

    printf("\n");
    return 0;
}
