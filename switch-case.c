#include <stdio.h>

int main() {
    char operacao;
    float num1, num2;

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(operacao) {
        case '+':
            printf("Resultado: %f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %f\n", num1 / num2);
            else
                printf("Erro: Divisão por zero!\n");
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}