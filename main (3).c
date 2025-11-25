#include <stdio.h>
int maiorElemento(int v[], int tam){
    int maior = v[0];
    for (int i = 1; i < tam; i++){
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}
float mediaVetor(int v[], int tam){
    int soma = 0;
    for (int i = 0; i < tam; i++){
        soma += v[i];
    }
    return (float)soma / tam;
}
float mediaAluno(float m[][3], int linha){
    float soma = 0;
    for (int j = 0; j < 3; j++) {
        soma += m[linha][j];
    }
    return soma / 3;
}
int main()
{
    int vetor[10];
    float matriz[5][3];
    float medidas[5];
    int i, j;
    printf("Digite 10 números inteiros\n");
    for(int i = 0; i < 10; i++){
        printf("v[%d]", i);
        scanf("%d", &vetor[i]);
    }
    int maior = maiorElemento (vetor, 10);
    float media = maiorElemento (vetor, 10);
    printf("\nMaior valor de votor%d\n", maior);
    printf("Média do vetor %2f\n\n",media);
    printf("Digite a nota dos 5 alunos (3 notas cada)\n");
    for(int i = 0; i < 5; i++){
           for (j = 0; j < 3; j++){
            printf("Aluno %d nota %d", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
    float maiorMedia = 0;
    printf("\nMédia dos alunos\n");
    for(i = 0; i < 5; i++){
        medidas[i] = mediaAluno(matriz, i);
        printf("Aluno %d %1f\n", i + 1, medidas[i]);
        if (medidas[i] > maiorMedia) 
        maiorMedia = medidas[i];
    }
    printf("\n Maior média geral 1%f\n", maiorMedia);
    return 0;
}