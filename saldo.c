#include <stdio.h>

int main () {
    int n;

    printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair");
    printf("Informe a operaçao desejada: ");

    scanf("%d", &n);

    switch(n) {
        case 1:
        printf("\nSaldo");
        break;
    }
    return 0;
}