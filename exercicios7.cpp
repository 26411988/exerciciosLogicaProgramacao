#include <cstdio>

int main() {
    // Variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicita ao usuário que insira o número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("%d\n",numero < 0);
    return 0;
}
