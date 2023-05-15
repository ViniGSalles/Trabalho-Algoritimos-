#include <stdio.h>

int main() {
    float nota1, nota2, frequencia, media;
    
    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);
    
    printf("Digite o percentual de frequencia do aluno: ");
    scanf("%f", &frequencia);
    
    media = (nota1 + nota2) / 2;
    
    if (media > 7.0 && frequencia > 75.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
    
    return 0;
}

