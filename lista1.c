#include <stdio.h>
#include <conio.h>


//01
int main ()
{
    float r, d, a, cir;

    printf("Insira o raio do circulo: ");
    scanf("%f", &r);

    d = 2*r;
    a = 3.14159*(r*r);
    cir = 2*3.14159*r;

    printf("Diametro = %.2f\n", d);
    printf("Area = %.2f\n", a);
    printf("Circunferencia = %.2f", cir);
    return 0;
}

/*
//02
int main ()
{
    float sal, salnov, bon;

    printf("Insira o salario: ");
    scanf("%f", &sal);
    printf("Insira a porcentagem do bonus: ");
    scanf("%f", &bon);

    bon = bon/100;
    salnov = (bon*sal) + sal;

    printf("O salario novo e de R$%.2f", salnov);
    return 0;
}
*/
/*
//03
int main ()
{
    float cel, fah;

    printf("Insira a temperatura em Celcius: ");
    scanf("%f", &cel);

    fah = cel*1.8 + 32;

    printf("A temperatura em Fahrenheit e: %.1f", fah);
    return 0;
}
*/
/*
//04
int main ()
{
    int a, b, soma;
    
    printf("Insira o primeiro nummero: ");
    scanf("%d", &a);
    printf("Insira o segundo nummero: ");
    scanf("%d", &b);

    soma = a+b;

    printf("A soma e: %d", soma);
    return 0;
}
*/
/*
//05
int main()
{
    float num1, num2, media;

    printf("Insira o primeiro nummero: ");
    scanf("%f", &num1);
    printf("Insira o segundo nummero: ");
    scanf("%f", &num2);

    media = (num1+num2)/2;

    printf("A media e: %.1f", media);

    return 0;
}
*/