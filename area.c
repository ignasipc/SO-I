#include <stdio.h>

#define pi 3.141593;

int main(){
    printf("***Cálculo del área de un círculo ***\nIntroduce el radio: ");
    float radio;
    scanf("%f", &radio);
    double area = radio * radio * pi;
    printf("El área del círculo de radio %.1f es: %.4f\n", radio, area);

    return 0;
}