#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valor;

    printf("Digite o código do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            valor = 7.50;
            break;
        case 101:
            valor = 5.50;
            break;
        case 103:
            valor = 10.50;
            break;
        case 104:
            valor = 11.00;
            break;
        case 105:
            valor = 13.50;
            break;
        case 106:
            valor = 3.50;
            break;
        default:
            printf("Produto não encontrado\n");
            return 0;
    }

    float total = valor * quantidade;
    printf("Valor a ser pago: R$ %.2f\n", total);
}

