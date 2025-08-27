#include <stdio.h>

minutos = 0
horas = 0
total = horas * 60 + minutos

int main() {
    int inicial, final, tot;
    printf("Informe a hora em que seu voo sai: ", horas, minutos);
    scanf("%d" inicial);
    printf("Informe a hora em que seu voo chega: " horas, minutos);
    scanf("%d" final);
    if (inicial > final) {
        tot = final - inicial + 1440;
        printf("O voo será de %d horas\n", tot);
    }
    else if (inicial = final) {
        printf("Os horários dados estão incorretos");
    }
    else () {
        tot = final - inicial;
        printf("O voo será de %d horas\n", tot);
    }
        
    
    
    return 0
}