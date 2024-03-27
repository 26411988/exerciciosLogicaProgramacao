#include <iostream>

int main() {
    float num1, num2, num3;
  
    
    printf("digite primeiro numero:");
    scanf("%f", &num1 );

    printf("digite segundo numero:");
    scanf("%f", &num2);

    printf("digite terceiro numero:");
    scanf("%f", &num3);


    printf("a media dos numeros e : %.2f\n", (num1 + num2 + num3) /3);

    return 0;
}
