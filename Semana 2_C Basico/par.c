#include <stdio.h>

int main(){
    printf("***Determinar si un número es par o impar***\nIntroduce un número: ");
    int numeroIntroducido;
    scanf("%i", &numeroIntroducido);
    
    if(numeroIntroducido%2 == 0){
        printf("El número %i es par\n", numeroIntroducido);
    }else{
        printf("El número %i es impar\n", numeroIntroducido);
    }

    return 0;
}