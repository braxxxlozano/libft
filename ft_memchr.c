#include <libft.h>

// La función ft_memchr se utiliza para buscar un carácter en un bloque de memoria.
void *ft_memchr(const void *s, int c, size_t n)
{
    // Declaramos un puntero p para recorrer el bloque de memoria.
    const unsigned char *p = (const unsigned char *)s;

    // Este bucle se ejecuta mientras que n sea mayor que 0. ( en el siguiente codigo esta la forma de hacerlo con while (n > 0))
    while (n--)
    {
        // Comprobamos si el byte al que apunta p es igual al carácter que estamos buscando.
        // Si es así, devolvemos un puntero al byte en el bloque de memoria.
        if (*p == (unsigned char)c)
            return (void *)p;

        // Avanzamos al siguiente byte en el bloque de memoria.
        p++;
    }

    // Si no encontramos el carácter en el bloque de memoria, devolvemos NULL.
    return NULL;
}

#include <libft.h>

// La función ft_memchr se utiliza para buscar un carácter en un bloque de memoria.
void *ft_memchr(const void *s, int c, size_t n)
{
    // Declaramos un puntero p para recorrer el bloque de memoria.
    const unsigned char *p = (const unsigned char *)s;

    // Este bucle se ejecuta mientras que n sea mayor que 0.
    while (n > 0)
    {
        // Comprobamos si el byte al que apunta p es igual al carácter que estamos buscando.
        // Si es así, devolvemos un puntero al byte en el bloque de memoria.
        if (*p == (unsigned char)c)
            return (void *)p;

        // Avanzamos al siguiente byte en el bloque de memoria.
        p++;

        // Decrementamos n.
        n--;
    }

    // Si no encontramos el carácter en el bloque de memoria, devolvemos NULL.
    return NULL;
}
