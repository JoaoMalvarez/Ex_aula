#include <stdio.h>
#include <stdlib.h>

int main() {
    int taxa, s3, s5, resolv, resto;
    printf("Informe a Taxa para correspondência (sendo o mínimo: 8 centavos) - em centavos: ");
    scanf("%d", &taxa);

    if (taxa < 8) {
        printf("Número informado inválido, coloque um número maior ou igual a 8 centavos.\n");
        return 1;
    }
    
    resolv = 0; // ainda não achou uma solução
    for (s5 = taxa / 5; s5 >= 0; s5--) {
        resto = taxa - s5 * 5;
        if (resto % 3 == 0) {
            s3 = resto / 3;
            printf("%d centavos: %d selo(s) de 3 centavos e %d selo(s) de 5 centavos.\n", taxa, s3, s5);
            resolv = 1; // agr achou a solução
            break; 
        }
    }
    return 0;
}
