#include <stdio.h>

struct veiculo{
    char fabricante[30];
    char modelo[30];
    int ano;
    char placa[7];
    char cor[30];
    char comb; // 'A' para álcool e 'G' para gasolina 
    float preco;
    float ipva;
};

