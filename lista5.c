#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
//Ex01
int main(){
    int matriz[3][3];
    int x;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Insira um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    printf("Insira o valor a ser multiplicada: ");
    scanf("%d", &x);
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\n", x*matriz[i][j]);
        }
    }
}
*/
/*
//Ex02
int main() {
    char nomes[10][50];
    float notas[10][4], media;

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        for (int j = 0; j < 4; j++) {
            printf("Digite a nota %d do aluno: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        media = 0;
        printf("%s", nomes[i]);
        for (int j = 0; j < 4; j++) {
            media += notas[i][j];
        }

        media = media / 4;
        if (media < 6.0){
            printf(" : Reprovado\n");
        }else{
            printf(" : Aprovado\n");
        }
    }

    return 0;
}
*/
/*
//Ex03
int main(){
    int v1[10];

    for(int i =0; i<10; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<10; i++){
        if(v1[i]%7 == 0){
            printf("%d\n", v1[i]);
        }
    }
}
*/