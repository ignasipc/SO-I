#include <stdio.h>

int main(){
    printf("*** Números múltiplos de 5 ***\n");
    int multiplo = 5;
    int i = 1;
    int iteraciones = 0;
    int resultado = 0;
    
    while (resultado < 100)
    {
        resultado = multiplo * i;
        iteraciones++;
        i++;
        printf("%i ", resultado);
        if (iteraciones == 5)
        {
            printf("\n");
            iteraciones = 0;
        }
         
    }

    return 0;
}