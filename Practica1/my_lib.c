#include "my_lib.h"

size_t my_strlen(const char *str){
    const char *p_str=str;
    
    while(*p_str){
        p_str++;
    }

    return (p_str-str);
};

int my_strcmp(const char *str1, const char *str2) {
    int dif = 0;    //  Diferencia entre el ASCII de str1 y str2
    
    do {
        dif = (int) *str1 - (int) *str2;    //  Resta entre str1 y str2
    } while((*str1++ && *str2++) && (*str1 == *str2));  //  Mientras str1 y str2 no estén finalizados y sigan teniendo el mismo
                                                        //  carácter, continuar iterando, si son caracteres distintos saldrá

    return dif;     //  Devolver la diferencia
}

char *my_strcpy(char *dest, const char *src) {
    int i = 0;
    int n = sizeof(dest);

    memset(dest,'\0',n);
    
    do{
        dest[i] = src[i];
        i++;
    }while(*(src+i));

    dest[i] = '\0';

    return dest;
}

char *my_strncpy(char *dest, const char *src, size_t n) {
    int i = 0;
    
    do{
        dest[i] = src[i];
        i++;
    }while(i < n);
    
    return dest;
}

char *my_strcat(char *dest, const char *src) {
    char *dest_original = dest; //Guardamos el inicio del puntero de dest
    while (*dest != '\0')       //Buscamos el final de la cadena dest
    {
        dest++;
    }

    while (*src != '\0')        //A partir del final de dest copiamos src hasta el final
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';               //Agregamos el final de cadena

    return dest_original;
}

//Mirar por que no devuelve (null)
char *my_strchr(const char *s, int c) {
    while(*s != c && *s++);     //  Mientras no se haya encontrado el carácter buscado y no se haya acabado el array,
                                //  incrementar la posición a la que apunta s

    return (char*)s;            //  Devolver el array s
}
