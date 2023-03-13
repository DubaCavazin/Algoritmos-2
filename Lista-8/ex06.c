#include <stdio.h>

struct Cliente {
    char nome[50];
    char email[50];
    int plano; // 1 - ilimitado; 2 - 20 horas/mês; 3 - 10 horas/mês
    float mensalidade;
    char situacao; // A - Ativo; I - Inativo
};