#include <stdio.h>

int main() {
    int escolha;

    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("0. Sair\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Você escolheu opção 1!\n");
                break;
            case 2:
                printf("Você escolheu opção 2!\n");
                break;
           default:
                printf("Tchau!\n");
        }
    } while (escolha == 1 || escolha == 2);

    return 0;
}