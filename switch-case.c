// CÓDIGO 4.1 GOTO
#include <stdio.h>

int main() {

    printf("Entre com um numero menor do que 10 pra repetir e maior do 10 pra encerrar: ");
    denovo: // rótulo para o goto
    float x;
    scanf("%f", &x);
    
    if (x < 10)
    
        goto denovo; // volta para o rótulo 'denovo'
    
    printf("%.2f\n", x);
    
    return 0;
}

