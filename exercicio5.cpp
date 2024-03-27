#include <cstdio>

int main() {
    // Variável para armazenar a temperatura em Celsius fornecida pelo usuário
    float temperaturaCelsius;

    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaCelsius);

   
    float temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32;

    // Imprime a temperatura equivalente em Fahrenheit
    printf("A temperatura em Fahrenheit é: %.2f\n", temperaturaFahrenheit);

    return 0;
}
