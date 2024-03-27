#include <cstdio>

int main() {
    // Variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicita ao usuário que insira o número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo
    int resultado = (numero < 0) ? 1 : 0;

    // Imprime o resultado (1 para negativo, 0 para positivo ou zero)
    printf("%d\n", resultado);

    return 0;
}
