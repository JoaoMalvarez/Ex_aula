#include <stdio.h>

int minutos() {
    int hr, min;
    scanf("%d:%d", &hr, &min);
    return hr * 60 + min;
}

int diferenca(int inicial, int final) {
    int tot;
    if (inicial > final) {
        tot = (1440 - inicial) + final;
    }
    else if (inicial == final) {
        printf("Houve um erro nos dados fornecidos, por favor repita o processo corretamente.\n");
        return 0;
    }
    else {
        tot = final - inicial;
    }
    return tot;
}

int main() {
    int inicial, final, tot;

    printf("Informe a hora em que seu voo sai (hh:mm): ");
    inicial = minutos();

    printf("Informe a hora em que seu voo chega (hh:mm): ");
    final = minutos();

    tot = diferenca(inicial, final);

    if (tot > 0) {
        printf("O voo será de %d:%d hora(s), ou %d minutos\n", tot / 60, tot % 60, tot);
    }
    return 0;
}