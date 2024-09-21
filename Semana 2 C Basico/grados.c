#include <stdio.h>

int main(){
    printf("***Conversión de grados Fahrenheit a grados centígrados***\nIntroduce grados Fahreinheit: ");
    float farenheit, celsius;
    scanf("%f", &farenheit);
    celsius = (5.0 / 9.0) * (farenheit - 32);
    printf("%.0f grados Fahrenheit son %.1f grados centígrados\n", farenheit, celsius);
    return 0;
}