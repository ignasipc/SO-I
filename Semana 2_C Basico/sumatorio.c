#include <stdio.h>

//Realiza un programa llamado sumatorio.c que lea un número N y calcule 1+2+3+...+N (sentencia while)

int main(){
    int numeroLeido = 1;

    printf("Introduce un número: ");
    scanf("%i", &numeroLeido);

    int resultado = 0;

    while (numeroLeido > 0)
    {
        resultado += numeroLeido;
        numeroLeido--;
    }
    printf("El resultado del sumatorio es: %i\n", resultado);

    return 0;
}