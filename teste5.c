// CÓDIGO 2.10 - Declaração de variáveis (char) como STRING
#include <stdio.h>

int main() {
    char nome[10];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome armazenado foi: %.3s\n", nome);
    return 0;
}

