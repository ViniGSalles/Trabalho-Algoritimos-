#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero > 50) {
        printf("Metade do numero: %d\n", numero / 2);
    } else {
        printf("Dobro do numero: %d\n", numero * 2);
    }
}
