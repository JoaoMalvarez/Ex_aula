#include <stdio.h>
#include <string.h>

#define TAM 10

typedef struct {
    int codigo;
    char nome[100];
    int idade;
    int gravidade; // 0 a 100
} Paciente;

void selectionSort(Paciente v[], int n) {
    int max_idx;
    for (int i = 0; i < n - 1; i++) {
        max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j].gravidade > v[max_idx].gravidade)
                max_idx = j;
        }
        if (max_idx != i) {
            Paciente temp = v[max_idx];
            v[max_idx] = v[i];
            v[i] = temp;
        }
    }
}

int main() {
    Paciente pacientes[TAM] = {
        {101, "Ana Paula", 45, 85},
        {102, "Carlos Eduardo", 60, 92},
        {103, "Fernando Lima", 33, 76},
        {104, "João Marcos", 70, 98},
        {105, "Luciano Alves", 55, 88},
        {106, "Bruno Rocha", 40, 69},
        {107, "Marta Silva", 28, 58},
        {108, "Rafael Tavares", 38, 73},
        {109, "Juliano Costa", 49, 91},
        {110, "Roberto Teixeira", 65, 94}
    };

    selectionSort(pacientes, TAM);

    printf("==========================\n");
    printf("Casos Mais Urgentes\n");
    printf("==========================\n");
    for (int i = 0; i < 2; i++) {
        printf("Codigo: %d\n", pacientes[i].codigo);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Gravidade: %d\n", pacientes[i].gravidade);
        printf("--------------------------\n");
    }

    return 0;
}
