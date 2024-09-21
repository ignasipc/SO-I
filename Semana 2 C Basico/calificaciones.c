#include <stdio.h>

int main(){
    printf("***Determinar la calificación cualitativa ***\nIntroduce una nota: ");
    int nota;
    scanf("%i", &nota);

    if (nota < 0)
    {
        printf("Introducir un valor entre 0 y 10\n");
    }else if (nota < 5)
    {
        printf("Suspenso\n");
    }else if (nota < 7)
    {
        printf("Aprobado\n");
    }else if (nota < 9)
    {
        printf("Notable\n");
    }else if (nota <= 10)
    {
        printf("Excelente\n");
    }else if (nota > 10)
    {
        printf("Introducir un valor entre 0 y 10\n");
    }

    return 0;
}