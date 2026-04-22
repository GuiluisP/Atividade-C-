#include  <stdio.h>
#include <math.h>

int main() {
    double valor;
    double quadrado;

    printf("Escreva o seu numero: \n");
    scanf("%lf", &valor);

    quadrado = valor * valor;


    printf("O quadrado de %lf vai ser: %lf\n", valor , quadrado);

    return 0;
}
