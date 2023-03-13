#include <stdio.h>

struct cliente{
    char nome[50];
    int cod_agencia;
    char data_nascimento[11]; // formato dd/mm/aaaa
    float saldo_atual;
    char situacao; // 'V' para VIP e 'N' para normal
};