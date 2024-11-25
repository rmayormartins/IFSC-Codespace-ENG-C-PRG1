//verificar IMC
#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Digite o peso em kg");
    scanf("%f", &peso);
    printf("Digite a altura em metros");
    scanf("%f",&altura);
    
    imc = peso/ (altura*altura);
    printf ("IMC calcuado: %.2f\n", imc);

    if (imc >= 18.5 && imc <=24.9) 
    {
        printf ("IMC ideal\n");
    } else {
        printf("IMC fora do ideal");
    }
    
    return 0;
}

