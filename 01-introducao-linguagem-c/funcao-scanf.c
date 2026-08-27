#include <stdio.h>
#include <stdlib.h>

// Aula 12 - Criando váriaveis e lendo números inteiros do teclado com a função scanf

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Você tem %d anos.\n", idade);
    return 0;
}
