#include <stdio.h>

int main(){
    float orcamento;
    printf("\n Digite o valor do orçamento para viagem: ");
    scanf("%f", &orcamento);
    if (orcamento >= 10000) {
        printf("\n Joao e maria possuem orçamento para uma viagem");
    } else {
        printf("\n Joao e maria irao optar por uma viagem mais em conta");
    }
    return 0;
}