#include <stdio.h>
#include <stdlib.h>
#include "mat.c"

int main()
{
    float a, b, c;
    float x1, x2, delta;

    printf("Bem-vindos ao LBR.\n");
    printf("Digites os valores de acordo com a equado do segundo grau.\n\n");

    printf("  A:");
    scanf("%f", &a);
    printf("\n  B:");
    scanf("%f", &b);
    printf("\n  C:");
    scanf("%f", &c);

    delta = (b*b)-(4*a*c);
    x1= (-b+raiz(delta, 2))/(2*a);
    x2= (-b-raiz(delta, 2))/(2*a);

    printf("\e[H\e[2J");
    printf(" As raizes da equacao A: %.2f  B: %.2f  C: %.2f  são.\n", a, b, c);
    if(delta > 0){
    printf("\n  X1: %f", x1);
    printf("\n  X2: %f\n", x2);
    printf("\n  Sendo Delta: %f\n", delta);
     }else
        printf("\nVazias, pois nao possuem solucoes no conjunto dos numeros reais!\n");
    return 0;
}
