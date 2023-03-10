#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
//Ex01
int main(){
    int num[10];
    int i = 0;

    while(i<10){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &num[i]);
        i++;
    }
    i = 0;
    while(i<10){
        printf("%d numero: %d\n", i+1, num[i]);
        i++;
    }
    return 0;
}
*/
/*
//Ex02
int main(){
    float sal[20];
    int i = 0;

    while(i<20){
        printf("Insira o %d salario: ", i+1);
        scanf("%f", &sal[i]);
        i++;
    }
    i=0;
    while(i<20){
        sal[i] = sal[i] * 1.08;
        printf("Novo salario = %.2f\n", sal[i]);
        i++;
    }
    return 0;
}
*/
/*
//Ex03
int main(){
    int c1[20], c2[20];
    int i, j;
    int flag = 0;
    srand(time(NULL));
    i = 0;

    while(i<20){
        c1[i] = rand() % 100;
        c2[i] = rand() % 100;
        i++;
    }
    i=0;
    
    while(i<20){
        j=0;
        while(j<20){
            if(c1[i] == c2[j]){
                printf("O numero %d esta nos dois conjuntos.\n", c1[i]);
                flag = 1;
            }
            j++;
        }
        i++;
    }
    if(flag == 0){
        printf("Nao a numeros repetidos.");
    }
    return 0;
}
*/
/*
//Ex04
int main(){
    float v[10], w[10];
    int i=0;
    srand(time(NULL));

    while(i<10){
        v[i] = rand() % 50;
        w[i] = v[i]*v[i];

        printf("%.2f  |  %.2f\n", v[i], w[i]);
        i++;
    }
    return 0;
}
*/
/*
//Ex05
int main(){
    int v[30];
    srand(time(NULL));

    for(int i=0; i<30;i++){
        v[i] = rand() %50;
        printf("%d\n", v[i]);
    }
    printf("---------\n");
    for(int i = 29; i>=0; i--){
        printf("%d\n", v[i]);
    }
}
*/