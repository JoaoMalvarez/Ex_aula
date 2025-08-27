#include <stdio.h>

int minutos() {
    int min1, min2, hr1, hr2, tot;
    tot = hr1 * 60 + min1;
    tot = hr2 *60 + min1;

    int diferenca() {
        int inicial, final, tot;
        printf("Informe a hora em que seu voo sai: ");
        scanf("%d:%d", &hr1, &min1);
        inicial = hr1 * 60 + min2;
        printf("Informe a hora em que seu voo chega: ");
        scanf("%d:%d", &hr2, &min2);
        final = hr2 * 60 + min2;
        if (inicial > final) {
            tot = inicial - final + 1440;
            printf("O voo será de %d horas\n", tot);
        }
        else if (inicial = final) {
            printf("Os horários dados estão incorretos");
        }
        else {
            tot = final - inicial;
            printf("O voo será de %d horas\n", tot);
        }
         return 0;
    }
}