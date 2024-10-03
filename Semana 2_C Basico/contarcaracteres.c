//Realiza un programa llamado contarcaracteres.c que contenga una función para contar los 
//caracteres escritos por el usuario hasta final de flujo (función getchar(), funciones con
//paso de argumentos por valor)

#include <stdio.h>

int contar_caracteres();

int main() {
   printf("***Función contar caracteres de stdin hasta EOF***\n");
   int num_car = contar_caracteres();
   printf("\nHas escrito %d caracteres\n", num_car);

   return 0;
}

int contar_caracteres() {
   int cont = 0;
   char c;

   c = getchar();
   while (c != EOF) {
       cont++;
       c = getchar();
   }
   return (cont);
}