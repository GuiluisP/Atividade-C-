#include <stdio.h>

int main() {
    int valor;

    int positivo = 0; 
    int negativo = 0;
    int zero = 0;

    for (int i = 1; i <= 5; i++){ 

    printf("Digite seu valor para analise: \n");
    scanf("%d",&valor);

        if (valor > 0) {
            positivo++;
        }
        else if (valor < 0) {
            negativo++;
        }
        else {
            zero++;
        }

    }

    printf("\n--- Resultados ---\n");
    printf("Quantidade de positivos: %d\n", positivo);
    printf("Quantiade de negativos: %d\n", negativo);
    printf("Quantiade de zero: %d\n", zero);

    return 0;
}
//fazer loop para ler até 5 vezes e depois os resultados
