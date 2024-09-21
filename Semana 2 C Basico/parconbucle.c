#include <stdio.h>

//Realiza un programa llamado parconbucle.c que lea repetidamente un nº e indique si es par o impar. El programa se repite mientras el número sea distinto de 0 (sentencia do-while)


int main(){
    int numeroLeido = 1;

    printf("***Determinar si un número es par o impar***\n");

    do
    {
        printf("Introduce un número: ");
        scanf("%i", &numeroLeido);

        if(numeroLeido%2 == 0){
            printf("El número %i es par\n", numeroLeido);
        }else{
            printf("El número %i es impar\n", numeroLeido);
        }
        
    } while (numeroLeido != 0);
    

    return 0;
}