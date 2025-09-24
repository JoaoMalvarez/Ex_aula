#include <stdio.h>
#include <stdlib.h>
#define LINHAS (26)
#define COLUNAS (2)

char letras_para_morse(char letras, int morse,char m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        m[i] = morse;
    }
    int m[LINHAS][COLUNAS] = {
        {'A', ".-"},
        {'B', "-..."},
        {'C', "-.-."}.
        {'D', "-.."},
        {'E', "."},
        {'F', "..-."},
        {'G', "--."},
        {'H', "...."},
        {'I', ".."},
        {'J', ".---"},
        {'K', "-.-"},
        {'L', ".-.."},
        {'M', "--"},
        {'N', "-."},
        {'O', "---"},
        {'P', ".--."},
        {'Q', "--.-"},
        {'R', ".-."},
        {'S', "..."},
        {'T', "-"},
        {'U', "..-"},
        {'V', "...-"},
        {'W', ".--"},
        {'X', "-..-"},
        {'Y', "-.--"},
        {'Z', "--.."}
    };
    return m[morse];
}

int main() {
    char letra;
    char frase[100];
    printf("Escreva a frase que quer converter para Morse: ");
    scanf("%c", &frase[letra]);
    for (letra = 0; frase[letra] != '\0'; letra++) {
        if (frase[letra] >= 'A' && frase[letra] <= 'Z') {
            printf("%s ", letras_para_morse(frase[letra], letra, m));
        } else if (frase[letra] >= 'a' && frase[letra] <= 'z') {
            printf("%s ", letras_para_morse(frase[letra] - 32, letra, m));
        } else if (frase[letra] == ' ') {
            printf("/ ");
        }

    }
    return 0;
}