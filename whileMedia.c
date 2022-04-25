#include <stdio.h>

int main (){

    float nota, media, total;
    int contador;
    total = 0;
    contador = 1;

    while (contador <= 4)
    {
        printf("Digite a nota: \n");
        scanf("%f", &nota);
        total = total + nota;
        contador++;
    }

    media = total / 4;
    printf("Nota media: %.2f\n", media);
    return 0;
    

}