#include <stdio.h>
#include <math.h>

int main() {
    // Definição dos pontos (x1, y1) e (x2, y2)
    double x1, y1, x2, y2;
    double m, b;

    // Recebe os valores dos pontos
    printf("Digite o valor de x1: ");
    scanf("%lf", &x1);
    printf("Digite o valor de y1: ");
    scanf("%lf", &y1);
    printf("Digite o valor de x2: ");
    scanf("%lf", &x2);
    printf("Digite o valor de y2: ");
    scanf("%lf", &y2);

    // Calcula o coeficiente angular (m)
    m = (y2 - y1) / (x2 - x1);

    // Calcula o coeficiente linear (b)
    b = y1 - m * x1;

    // Exibe a equação da reta
    printf("A equação da reta é: y = %.2lfx + %.2lf\n", m, b);

    return 0;
}
