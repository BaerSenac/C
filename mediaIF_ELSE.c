#include <stdio.h>

int main() {
    float nota1, nota2;
    float media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2.0;

    if (media >= 7.0) {
        printf("Aluno APROVADO! \n");
    } else {
        if (media >= 5.0)
        {
            printf("Aluno em RECUPERAÇAO \n");
        }
        else {
            printf("Aluno REPROVADO \n");
        }
        
    }

    printf("A média do aluno foi de %.2f", media);

    return 0;
    
}
