//Realiza un programa que contenga una función recursiva para calcular el factorial 
//de un número (funciones recursivas)

#include <stdio.h>

int factorial(int x);

int main(){
    int numeroLeido;
    printf("***Cálculo del factorial de un número***\nIntroduce un número: ");
    scanf("%i", &numeroLeido);

    printf("%i! = %i\n", numeroLeido, factorial(numeroLeido));

    return 0;
}

int factorial(int x){
    if (x < 1)
    {
        return 1;
    }
    return x * factorial(x-1);
    
}