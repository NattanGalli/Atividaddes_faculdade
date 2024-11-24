#include <stdio.h>
// Nome: Nattan lopes antoniacci galli
int mediaEscola(int num_turmas, int num_alunos, int soma_escola);
void mediaTurma(int provisorio, int num_alunos);

int main()
{
	int num_turmas, num_alunos, soma_turma; 
	int soma_escola = 0, provisorio = 0;
	
	printf("digite a quantidade de turmas: ");
	scanf("%d", &num_turmas);
	printf("digite a quantidade de alunos: ");
	scanf("%d", &num_alunos);
	
	int matriz_turmas[num_turmas][num_alunos];
	
	for (int i = 0; i < num_turmas; i++){
		for (int j = 0; j < num_alunos; j++){
			printf("digite a nota do aluno %d: ", j+1);
			scanf("%d", &matriz_turmas[i][j]);
			soma_escola += matriz_turmas[i][j];
		}
	}
	
	for (int i = 0; i < num_turmas; i++){
		provisorio = 0;
		for (int j = 0; j < num_alunos; j++){
			provisorio += matriz_turmas[i][j];
			printf("%d", provisorio);
			printf("[%d] ", matriz_turmas[i][j]);
		}
		printf("\n");
		mediaTurma(provisorio, num_alunos);
	}
	mediaEscola(num_turmas, num_alunos, soma_escola);
return 0;
}

int mediaEscola(int num_turmas, int num_alunos, int soma_escola){
	int total_notas = num_turmas * num_alunos;
	float media_escola = (float)soma_escola / total_notas;
	printf("%d", media_escola);
}

void mediaTurma(int provisorio, int num_alunos){
    float media_turma = (float)provisorio / num_alunos;
    printf("Media da turma: %.2f\n", media_turma);
}
