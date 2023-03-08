#include <stdio.h>
#include <conio.h>
#include <string.h>


//01 Terminar
int main () {
    int comp;
    char palavra[100];
    
    scanf("%s", &palavra);
    comp = strcmp(palavra, "fim");
    while(comp != 0){
        printf("Palavra informada: %s\n", palavra);
        scanf("%s", &palavra);
        comp = strcmp(palavra, "fim");
    }
    return 0;
}

/*
//02
int main(){
    float a, b, res;
    b = 0;

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    while (b==0){
        printf("Digite o segundo valor: ");
        scanf("%f", &b);
    }

    res = a/b;
    printf("Resultado = %.2f", res);
}
*/
/*
//03
int main(){
    float a, b, media;
    int i;
    i = 0;

    while (i==0){
        printf("Digite a primeira nota: ");
        scanf("%f", &a);

        if (a< 0 || a>10){
            printf("Nota Invalida\n");
        }
        else{
            i++;
        }
    }

    while (i==1){
        printf("Digite a segunda nota: ");
        scanf("%f", &b);

        if (b< 0 || b>10){
            printf("Nota Invalida\n");
        }
        else{
            i++;
        }
    }

    media = (a+b)/2;
    printf("Media = %.2f", media);
}
*/
/*
//04
int main(){
    for(int i = 101; i <=110; i++){
        printf("%d\n", i);
    }
    return 0;
}
*/
/*
//05
int main(){
    int i;
    i = 1;
    while(i < 11){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/
/*
//06
int main(){
    float num, total, media;

    for(int i = 1; i < 11; i++){
        printf("Digite o %d valor: ", i);
        scanf("%f", &num);
        total +=  num;
    }
    media = total/10;

    printf("Media = %.2f", media);
}
*/