#include <stdio.h>
// Nome: Nattan lopes antoniacci galli
int somaNum(int n1, int n2){
	int soma = n1 + n2;
	printf("a soma dos numeros e de %d ", soma);
}


int main()
{
    int n1, n2;
    
    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("digite o segundo numero: ");
    scanf("%d", &n2);
	somaNum(n1, n2);
    return 0;
}
