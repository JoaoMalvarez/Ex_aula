#include <stdio.h>

int diferenca() {
    int hr1, min1, hr2, min2;
    int inicial, final, tot;

    printf("Informe a hora em que seu voo sai (hh:mm): \n");
    scanf("%d:%d", &hr1, &min1);
    inicial = hr1 * 60 + min1;
    
    printf("Informe a hora em que seu voo chega (hh:mm): \n");
    scanf("%d:%d", &hr2, &min2);
    final = hr2 * 60 + min2;

    if (inicial > final) {
        tot = (1440 - inicial) + final;
    } 
    else if (inicial == final) {
        printf("Os horários dados estão incorretos\n");
        return 0;
    } 
    else {
        tot = final - inicial;
    }

    printf("O voo será de %d:%d\n", tot / 60, tot % 60);

    return 0;
}

int main() {
    diferenca();
    return 0;
}
