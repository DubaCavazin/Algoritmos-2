#include <stdio.h>

struct DadosAluno{
    char nome[50];
    int idade;
};

int main(){
    struct DadosAluno aluno;

    aluno.nome = "Eduardo";
    aluno.idade = 23;

    printf("Nome do aluno: %s", aluno.nome);
    printf("Idade do aluno: %d", aluno.idade);

    return 0;
}