#include <stdio.h>

int main(){
    int numeroIntroducido;
    printf("***Cálculo del cuadrado de un número ***\nIntroduce un número: ");
    scanf("%i", &numeroIntroducido);
    int resultado = numeroIntroducido*numeroIntroducido;
    printf("El cuadrado de %d es %d\n", numeroIntroducido, resultado);

    return 0;
}