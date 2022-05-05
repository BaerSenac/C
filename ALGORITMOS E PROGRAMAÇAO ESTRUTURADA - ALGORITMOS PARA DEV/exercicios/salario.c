#include <stdio.h>

int main () {
    float salario, salario_anual;

    printf("\n Digite o salario anual: ");
    scanf("%f", &salario_anual);
    salario = salario_anual / 12;

    printf("\n O valor do salario é de R$ %.2f", salario);
    return 0;
}