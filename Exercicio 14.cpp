#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite os coeficientes da equaçao (A, B, C): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raiz 1: %.2f\n", raiz1);
        printf("Raiz 2: %.2f\n", raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("Raiz unica: %.2f\n", raiz1);
    } else {
        printf("Essa equaçao nao possui raizes reais\n");
    }
}

