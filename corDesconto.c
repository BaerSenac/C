#include <stdio.h>

int main (){
    char x;
    float valor, desc, total;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
    printf("\nDigite a letra que representa o seu desconto de acordo com a cor: ");
    printf("\na. azul (30%)");
    printf("\nv. vermelho (20%)");
    printf("\nb. branco (10%)");

    printf("\nDigite sua opçao: ");
    scanf("%s", &x);
    
    switch(x) {
        
        case 'a':
        printf("\nVoce escolheu a cor azul, seu desconto sera de 30%");
        desc = 30;
        break;
        
        case 'v':
        printf("\nVoce escolheu a cor vermelho, seu desconto sera de 20%");
        desc = 20;
        break;
        
        case 'b':
        printf("\nVoce escolheu a cor branco, seu desconto sera de 10%");
        desc = 10;
        break;
        
        default:
        printf("\nOpçao inválida");
        desc = 0;
        
    }
        total = valor - (valor * desc / 100);
        
        printf("\nSeu valor do desconto é de R$ %.2f", total);
        
        return 0;

}