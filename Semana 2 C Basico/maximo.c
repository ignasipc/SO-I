//Realiza un programa llamado maximo.c que contenga una función para calcular
//el máximo de dos números enteros (funciones, paso de argumentos por valor)

#include <stdio.h>

int maximo(int x, int y);

int main(){
    int numeroLeido1 = 0, numeroLeido2 = 0;
    printf("***Función máximo de dos números enteros***\nIntroduce dos números:\n");
    scanf("%i\n%i", &numeroLeido1, &numeroLeido2);

    printf("MAX(%i,%i) = %i\n", numeroLeido1, numeroLeido2, maximo(numeroLeido1, numeroLeido2));

    return 0;
}

int maximo(int x, int y){
    return (x > y ? x : y);
}