#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ppt, chose;
    srand(time(NULL));
    ppt = rand() % 3 + 1;


    printf("Escolha entre (1 -Pedra, 2 - Papel ou 3 - Tesoura) ");
    scanf("%d", &chose);
    if (chose < 1 || chose > 3) {
        printf("Não é possivel essa escolha");
    } 
    else if (ppt == 1 && chose == 2 ) {
        printf("Papel ganha de Pedra | VITÓRIA |");
    } 
    else if (ppt == 2 && chose == 3 ) {
        printf("Tesoura ganha de Papel | VITÓRIA |");
    } 
    else if (ppt == 3 && chose == 1 ) {
        printf("Pedra ganha de Tesoura | VITÓRIA |");
    } 
    else if (ppt == 1 && chose == 3 ) {
        printf("Tesoura perde de Pedra | DERROTA |");
    } 
    else if (ppt == 3 && chose == 2 ) {
        printf("Papel perde de Tesoura | DERROTA |");
    } 
    else if (ppt == 2 && chose == 1 ) {
        printf("Pedra perde de Papel | DERROTA |");
    } 
    else {
        printf("A escolha entre os dois lados foi a mesma, EMPATE.");
    }

return 0;
}