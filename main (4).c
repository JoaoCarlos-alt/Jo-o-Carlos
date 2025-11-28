#include <stdio.h>
void lerNotas(float notas[][4], int qtdAlunos){
    for(int i = 0; i < qtdAlunos; i++){
        printf("\nAluno %d:\n", i + 1);
        for(int j = 0; j < 4; j++){
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}
void calcularMedias(float notas[][4], float medias[], int qtdAlunos){
    for (int i = 0; i < qtdAlunos; i++){
        float soma = 0;
        for (int j = 0; j < 4; j++){
            soma += notas[i][j];
        }
        medias[i] = soma / 4.0;
    }
}
void exibirMedias(float medias[], int qtdAlunos){
    printf("\n=== Médias dos alunos ===\n");
    for(int i = 0; i < qtdAlunos; i++) {
        printf("Aluno %d: %.2f\n", i + 1, medias[i]);
    }
}
void maiorMenorNota(float notas[][4], int qtdAlunos, float *maior, float *menor){
    *maior = notas[0][0];
    *menor = notas[0][0];
 
    for(int i = 0; i < qtdAlunos; i++){
        for(int j = 0; j < 4; j++){
            if(notas[i][j] > *maior){
                *maior = notas[i][j];
            }
            if (notas[i][j] < *menor){
                *menor = notas[i][j];
            }
        }
    }
}
 
void listarAprovadosReprovados(float medias[], int qtdAlunos){
    printf("\n=== Situação dos alunos ===\n");
    for(int i = 0; i < qtdAlunos; i++){
        if (medias[i] >= 6.0)
            printf("Aluno %d: Aprovado (%.2f)\n", i + 1, medias[i]);
        else
            printf("Aluno %d: Reprovado (%.2f)\n", i + 1, medias[i]);
    }
}
 
int main()
{
    int qtdAlunos;
    float notas[30][4];
    float medias[4];
    int opção;
    {
    printf("Digite a quantidade de alunos(1 a 30)");
    scanf("%d", &qtdAlunos);
    if(qtdAlunos < 1|| qtdAlunos > 30){
        printf("Valor invalido tente novamente\n");
    }
} while (qtdAlunos < 1 || qtdAlunos > 30);
{
     printf("\n====== MENU ======\n");
        printf("1 - Cadastrar/alterar notas\n");
        printf("2 - Calcular e exibir médias\n");
        printf("3 - Exibir maior e menor nota da turma\n");
        printf("4 - Listar aprovados e reprovados\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opção);
        switch (opção){
            case 1:
                lerNotas(notas, qtdAlunos);
                break;
            case 2:
                calcularMedias(notas, medias, qtdAlunos);
                exibirMedias(medias, qtdAlunos);
                break;
            case 3: {
                float maior, menor;
                maiorMenorNota(notas, qtdAlunos, &maior, &menor);
                printf("\nMaior nota: %.2f\n", maior);
                printf("Menor nota: %.2f\n", menor);
                break;
            }
            case 4:
                listarAprovadosReprovados(medias, qtdAlunos);
                break;
            case 5:
                printf("Encerrando o programa\n");
                break;
            default:
                printf("Opção inválida! Tente novamente\n");
        }
    } while (opção != 5);
    return 0;
}