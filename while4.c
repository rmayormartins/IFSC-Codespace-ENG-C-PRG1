#include <stdio.h>

int main() {
    int i = 0;

    printf("Uso i++:\n");
    while (i < 5) {
        printf("i = %d, i++ = %d\n", i, i++);
    }

    i = 0; // reset i

    printf("Uso ++i:\n");
    while (i < 5) {
        printf("i = %d, ++i = %d\n", i, ++i);
    }

    return 0;
}
//i++: Incrementa o valor de i depois de usar o valor atual.
//++i: Incrementa o valor de i antes de usar o novo valor.