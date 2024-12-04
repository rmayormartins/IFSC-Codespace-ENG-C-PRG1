#include <stdio.h>
int main (){
    int senha, tentativa = 0;
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        if (senha == 1234)
        {
            printf("Senha correta\n");
            return 0;
        } else {
            printf("Senha incorreta. Tente novamente\n");
        }
        tentativa++;
    } while (tentativa<3);
    printf ("Foi excedida mais que 3 tentativas");
    return 0;
}