#include <stdio.h>
#include <conio.h>
#include <math.h>

/*
//01
int main ()
{
    float dmaior, dmenor, area;

    printf("Insira a diagonal maior: ");
    scanf("%f", &dmaior);
    printf("Insira a diagonal menor: ");
    scanf("%f", &dmenor);

    area = (dmaior*dmenor)/2;

    printf("A area e: %.2f", area);
    return 0;
}
*/
/*
//02
int main ()
{
    float cato, cata, hip;

    printf("Insira o cateto oposto: ");
    scanf("%f", &cato);
    printf("Insira o cateto adjacente: ");
    scanf("%f", &cata);

    hip = sqrt((cato*cato) + (cata*cata));

    printf("Hipotenusa = %.2f", hip); 
    return 0;
}
*/
/*
//03
int main ()
{
    float razao, prit, dect;

    printf("Insira a razao da PA: ");
    scanf("%f", &razao);
    printf("Insira o primeiro termo da PA: ");
    scanf("%f", &prit);

    dect = prit+9*razao;

    printf("O decimo termo e: %.2f", dect);
    return 0;
}
*/
/*
//04
int main ()
{
    float razao, prit, quit;

    printf("Insira a razao da PG: ");
    scanf("%f", &razao);
    printf("Insira o primeiro termo da PG: ");
    scanf("%f", &prit);

    quit = prit*pow(razao, 4);

    printf("O quinto termo e: %.2f", quit);
    return 0;
}
*/
/*
//05
int main()
{
    int dig[5], menor, i;

    for (i=0; i < 5; i++){
        printf("Insia o %d numero :", i+1);
        scanf("%d", &dig[i]);
    }
    menor = dig[0];

    for (i=0; i < 5; i++){
        if (dig[i] < menor)
            menor = dig[i];
    }
    
    printf("Menor = %d", menor);
    return 0;
}
*/
/*
//06
int main()
{
    int a, b, c;

    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Insira o valor C: ");
    scanf("%d", &c);

    if (a+b>c && a+c>b && b+c>a){
        printf("Os tres valores formam um triangulo ");
            if (a==b && a==c)
                printf("equilatero");
            
            else if (a==b || a==c || b==c)
                printf("isoceles");
            
            else
                printf("escaleno");
    }
    else 
        printf("Os tres valores nao formam um triangulo");   
    return 0;
}
*/
/*
//07
int main()
{
    float a, b;

    printf("Insira o primeiro valor: ");
    scanf("%f", &a);
    printf("Insira o segundo valor: ");
    scanf("%f", &b);

    if (a>b)
        printf("O primeiro valor e maior que o segundo");
    else 
        printf("O segundo valor e maior que o primeiro");
    
    return 0;
}
*/
/*
//08
int main ()
{
    int dig[3], maior, i;

    for (i=0; i < 3; i++){
        printf("Insia o %d numero :", i+1);
        scanf("%d", &dig[i]);
    }
    maior = dig[0];

    for (i=0; i < 3; i++){
        if (dig[i] > maior)
            maior = dig[i];
    }
    
    printf("Maior = %d", maior);
    return 0;
}
*/