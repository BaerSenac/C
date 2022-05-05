#include <stdio.h>

int main () {
    float nota_final;
    printf("\nDigite a nota final: ");
    scanf("%f", &nota_final);
    if (nota_final >= 60) {
        printf("\nAprovado");
    } else {
        if (nota_final >= 50) {
            printf("\nRecuperaçao");
        } else {
            printf("\nReprovado")
        }
    }
    return 0;
}