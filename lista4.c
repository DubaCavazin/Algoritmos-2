#include <stdio.h>
/*
//Ex01
int main(){
    int v1[5], v2[5], soma[5];
    
    for(int i =0; i<5; i++){
        printf("Insira o %d digito do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<5; i++){
        printf("Insira o %d digito do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }
    for(int i =0; i<5; i++){
        soma[i] = v1[i] + v2[i];
        printf("%d\n", soma[i]);
    }
}
*/
/*
//Ex02
int main(){
    int num[15];
    for(int i =0; i<15; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
    }
    for(int i =0; i<15; i++){
        if(num[i]%2 == 0){
            printf("%d e par\n", num[i]);
        }
        else{
            printf("%d e impar\n", num[i]);
        }
    }
}
*/
/*
//Ex03
int main(){
    int v1[8];

    for(int i =0; i<8; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(int i =0; i<8; i++){
        if(v1[i]%6 == 0){
            printf("%d\n", v1[i]);
        }
    }
}
*/
/*
//Ex04
int main(){
    float prod[5];

    for(int i =0; i<5; i++){
        printf("Insira o preco do %d produto: ", i+1);
        scanf("%f", &prod[i]);
    }
    printf("Atualizacao de 10 porcento: ");
    for(int i =0; i<5; i++){
        prod[i] += prod[i]*0.1;
        printf("%.2f R$\n", prod[i]);
    }
}
*/