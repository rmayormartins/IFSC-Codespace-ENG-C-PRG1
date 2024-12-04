#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while (idade < 18) {
        printf("Você é menor de idade. Digite sua idade novamente: ");
        scanf("%d", &idade);
    }

    printf("Você é maior de idade.\n");

    return 0;
}