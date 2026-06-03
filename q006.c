#include  <stdio.h>
#include <math.h>

int main() {
    double valor;
    double raiz;

    printf("Escreva o seu numero: \n");
    scanf("%lf", &valor);

    raiz = sqrt(valor);


    printf("A raiz de %lf vai ser: %lf\n", valor , raiz);

    return 0;
}
