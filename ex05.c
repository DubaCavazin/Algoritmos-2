#include <stdio.h>

struct aluno {
    char nome[50];
    float notas[4];
};
int main() {
    struct aluno alunos[10];
    float media;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        
        printf("Digite as notas do aluno %d (separadas por espaço): ", i+1);
        scanf("%f %f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2], &alunos[i].notas[3]);
    }
    
    printf("Lista de alunos:\n");
    for (int i = 0; i < 10; i++) {
        media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3]) / 4;
        
        printf("%s - ", alunos[i].nome);
        
        if (media >= 6.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }
    return 0;
}
