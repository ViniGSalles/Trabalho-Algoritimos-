#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0) {
        printf("O numero %d e multiplo de 3\n", numero);
    } else {
        printf("O numero %d nao e multiplo de 3\n", numero);
    }
}
