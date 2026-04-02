#include <stdio.h>
#include <stdlib.h>

// --- Função para o A (O(n log n)) ---
int comparar(const void *a, const void *b) {
    float arg1 = *(const float*)a;
    float arg2 = *(const float*)b;
    if (arg1 < arg2) 
        return -1;
    if (arg1 > arg2) 
        return 1;
    return 0;
}

int buscaBinaria(float arr[], int esq, int dir, float alvo) {
    while (esq <= dir) {
        int meio = esq + (dir - esq) / 2;
        if (arr[meio] == alvo) 
            return 1;
        if (arr[meio] < alvo)
            esq = meio + 1;
        else 
            dir = meio - 1;
    }
    return 0;
}

void algoritmoA_NLogN(float S[], int n, float x) {
    qsort(S, n, sizeof(float), comparar); // Ordenação obrigatória para O(n log n)
    
    for (int i = 0; i < n; i++) {
        float complemento = x - S[i];
        int pos = buscaBinaria(S, i + 1, n - 1, complemento);
        
        if (pos != -1) {
            printf("[A] Par encontrado: %.2f + %.2f = %.2f\n", S[i], S[pos], x);
            return;
        }
    }
    printf("[A] Nenhum par encontrado.\n");
}

// --- Função para o B (O(n)) ---
void algoritmoB_Linear(float S[], int n, float x) {
    int esq = 0, dir = n - 1;

    while (esq < dir) {
        float soma = S[esq] + S[dir];
        if (soma == x) {
            printf("[B] Par encontrado: %.2f + %.2f = %.2f\n", S[esq], S[dir], x);
            return;
        }
        if (soma < x) esq++; // Soma muito pequena, move o da esquerda para aumentar
        else dir--;          // Soma muito grande, move o da direita para diminuir
    }
    printf("[B] Nenhum par encontrado.\n");
}

int main() {
    // Exemplo de teste
    float S[] = {1.2, 5.5, 3.0, 9.5, 10.0}; 
    int n = 5;
    float x = 15.0; 

    printf("Conjunto: {1.2, 5.5, 3.0, 9.5, 10.0} | Alvo: %.1f\n\n", x);

    algoritmoA_NLogN(S, n, x);
    algoritmoB_Linear(S, n, x);

    return 0;
}