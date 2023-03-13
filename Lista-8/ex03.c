#include <stdio.h>

struct imovel {
    int numero_cadastro;
    float valor_imposto;
    int meses_atraso;
};

int main() {
    struct imovel imovel_atrasado;
    float multa, valor_total;

    printf("Numero de cadastro: ");
    scanf("%d", &imovel_atrasado.numero_cadastro);
    printf("Valor do imposto: ");
    scanf("%f", &imovel_atrasado.valor_imposto);
    printf("Meses em atraso: ");
    scanf("%d", &imovel_atrasado.meses_atraso);

    multa = 10.0 * imovel_atrasado.meses_atraso;
    valor_total = imovel_atrasado.valor_imposto + multa;

    printf("Valor total do IPTU com a multa: R$%.2f\n", valor_total);

    return 0;
}