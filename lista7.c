#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
//Ex01
int main(){
    int matriz[10][10];
    srand(time(NULL));

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matriz[i][j] = rand() % 50;
        }
    }
    printf("Diagonal Principal:\n");
    for(int i=0; i<10; i++){
        printf("%d x %d = %d\n", i+1, i+1, matriz[i][i]);
    }
    return 0;
}
*/
/*
//Ex02
int main(){
    int matriz[10][10];
    srand(time(NULL));

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            matriz[i][j] = rand() % 50;
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(i != j){
              printf("%d x %d = %d\n", i+1, j+1, matriz[i][j]);  
            }
        }
    }
}
*/
/*
//Ex03
int main(){
    int matriz[5][5];
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Insira o termo %dx%d da matriz 1: ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d x %d = %d\n", i+1, j+1, matriz[i][j]);
        }
    }
    return 0;
}       
*/
/*
//Ex04
int main(){
    int matriz1[3][4];
    int matriz2[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz: ", i+1,j+1);
            scanf("%d", &matriz1[i][j]);

            matriz2[i][j] = 3 * matriz1[i][j];
        }
    }
    printf("Matriz 2 = \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d x %d = %d\n", i+1, j+1, matriz2[i][j]);
        }
    }
    return 0;
}
*/
/*
//Ex05
int main(){
    int matriz1[4][4], matriz2[4][4], soma[4][4];

    printf("Matriz 1: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz 1: ", i+1,j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Matriz 2: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Insira o termo %dx%d da matriz 2: ", i+1,j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("Soma = \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d x %d = %d\n", i+1, j+1, soma[i][j]);
        }
    }
    return 0;
}
*/