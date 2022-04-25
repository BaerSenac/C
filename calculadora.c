#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1, num2, soma, subtracao, multi, div;

    printf("Calculadora 1.0\n");
    printf("Digite os dois numeros: \n");
    scanf("%i%i", &num1, &num2);

    soma            = num1 + num2;
    subtracao       = num1 - num2;
    multi           = num1 * num2;
    div             = num1 / num2;

    printf("Soma: %i\n", soma);
    printf("Subtraçao: %i\n", subtracao);
    printf("Multiplicaçao: %i\n", multi);
    printf("Divisao: %i\n", div);

    return 0;
}