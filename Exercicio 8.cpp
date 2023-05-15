#include <stdio.h>

int main() {
    int dedosJoao, dedosMaria, somaDedos;
    
    printf("Digite a quantidade de dedos que Joao colocou: ");
    scanf("%d", &dedosJoao);
    
    printf("Digite a quantidade de dedos que Maria colocou: ");
    scanf("%d", &dedosMaria);
    
    somaDedos = dedosJoao + dedosMaria;
    
    if (somaDedos % 2 == 0) {
        printf("Resultado: Par\n");
    } else {
        printf("Resultado: Impar\n");
    }
}

