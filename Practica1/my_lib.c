#include "my_lib.h"

size_t my_strlen(const char *str){
    const char *p_str=str;
    
    while(*p_str){
        p_str++;
    }

    return (p_str-str);
};

int my_strcmp(const char *str1, const char *str2) {
    int i = 0;      //  Iterador
    int dif = 0;    //  Diferencia entre el ASCII de str1 y str2
    
    do {
        dif = (int) str1[i] - (int) str2[i];    //  Resta entre str1 y str2
        i++;
    } while((str1[i] && str2[i]) && (str1[i] == str2[i]));  //  Si str1 y str2 no están finalizados y siguen teniendo el mismo
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

/* 
    El siguiente código pasa el test
    char *my_strncpy(char *dest, const char *src, size_t n) {
    int i = 0;
    
    do{
        dest[i] = src[i];
        i++;
    }while(i < n);
    
    return dest;
} */

char *my_strncpy(char *dest, const char *src, size_t n) {
    
    
    printf("%li", my_strlen(src));
    if(my_strlen(src)<=n){
        int i = 0;
        do{
            dest[i] = src[i];
            i++;
        }while(i < n);
    }else{
        int o=my_strlen(dest);
        memset(dest, '\0', o);
    }
    
    return dest;
}

char *my_strcat(char *dest, const char *src) {
    int i = 0;
    // while (dest[i]!='\0')
    // {
    //     /* code */
    // }

    return 0;
}

char *my_strchr(const char *s, int c) {
    /* while(*s) {
        
    } */
    
    return (char*)s;
}
