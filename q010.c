#include <stdio.h>

int main() {
    int valor1 , valor2;

    printf("Escreva o seu primeiro valor: \n");
    scanf("%d", &valor1);

    printf("Escreva o seu segundo valor: \n");
    scanf("%d", &valor2);

    int quociente = valor1 / valor2;

    printf("O seu resultado da divisao e: %d\n", quociente);

    return 0;
}
