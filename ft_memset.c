#include <libft.h>
 // Esto le dice a la computadora que vamos a usar algunas herramientas de programación que están en un conjunto de herramientas llamado "libft.h".

void *ft_memset(void *s, int c, size_t n)
{ // Aquí estamos diciendo que vamos a hacer una tarea (una función) llamada "ft_memset". Esta tarea necesita tres cosas para hacer su trabajo: un lugar para empezar (s), un número para poner en los dominós (c), y cuántos dominós queremos cambiar (n).

    for (size_t i = 0; i < n; i++)
    { // Esto es como decir "empezando desde el primer dominó (i = 0), y continuando hasta que hayamos cambiado el número de dominós que queremos cambiar (i < n), haz lo siguiente para cada dominó (i++)".

        ((unsigned char *)s)[i] = (unsigned char)c;
        // Aquí es donde realmente cambiamos el número en el dominó. Estamos diciendo "toma el i-ésimo dominó desde donde empezamos (s), y cambia su número al número que queremos (c)".

    }
    return s;
    // Cuando hemos terminado de cambiar todos los dominós que queríamos cambiar, decimos "hemos terminado" devolviendo el lugar donde empezamos (s).
}

// OTRA FORMA DE HACERLO 
#include "libft.h" // Esta línea le dice al compilador que incluya la biblioteca "libft.h", que es una biblioteca personalizada que probablemente contiene algunas funciones útiles para tu programa.

void *ft_memset(void *s, int c, size_t n)
{ // Esta línea define la función "ft_memset". Esta función toma tres argumentos: un puntero "s" a un bloque de memoria, un valor entero "c" que se convertirá en un carácter, y un tamaño "len" que representa el número de bytes que se quieren llenar en la memoria.

    size_t i;
    // Declara una variable "i" de tipo "size_t", que es un tipo de dato entero sin signo que se utiliza para representar tamaños. En este caso, "i" se utilizará como contador en el bucle.

    char *str;
    // Declara un puntero "str" a un carácter. Este puntero se utilizará para acceder a los bytes de la memoria.

    i = 0;
    // Inicializa el contador "i" a 0.

    str = s;
    // Asigna el valor del puntero "s" al puntero "str". Ahora "str" y "s" apuntan al mismo lugar.

    while (i < n)
    { // Este es un bucle que se ejecuta mientras que "i" sea menor que "len". En otras palabras, se ejecutará "len" veces.

        str[i] = c;
        // Esta línea llena el i-ésimo byte de la memoria con el valor "c". 

        i++;
        // Esta línea incrementa el valor de "i" en 1. Esto significa que en la próxima iteración del bucle, se llenará el siguiente byte de la memoria.

    } // Este es el final del bucle.

    return s;
    // Cuando se han llenado todos los bytes deseados de la memoria, la función devuelve el puntero "s", que apunta al inicio del bloque de memoria.

} // Esta es el final de la función.
