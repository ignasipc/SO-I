#include <stdio.h>

int main(){
    printf("***Determinar si continuar o no***\n¿Deseas continuar (S) o no (N)? ");
    char caracterLeido;
    scanf("%c", &caracterLeido);

    switch (caracterLeido)
    {
    case'S':
    case's':
        printf("Ahora seguimos\n");
        break;

    case'N':
    case'n':
        printf("Nos vemos en otra ocasion\n");
        break;
        
    default:
        printf("Opción incorrecta\n");
        break;
    }

    return 0;
}