#include  <stdio.h>
#include <math.h>

int main() {
    float valor1;
    float valor2;

    printf("Escreva o seu primeiro valor: \n");
    scanf("%f", &valor1);

    printf("Escreva o seu segundo valor: \n");
    scanf("%f", &valor2);

    float primeira_elevada = pow(valor1, valor2);
    float segundo_elevada = pow(valor2, valor1);


    printf("O resultado do primeiro valor elevado e = %f\n",primeira_elevada);
    printf("O resultado do segundo valor elevado e = %f\n",segundo_elevada);

    return 0;
}
