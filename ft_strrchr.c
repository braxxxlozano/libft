#include <libft.h>

// La función ft_strrchr se utiliza para buscar la última aparición de un carácter en una cadena de caracteres.
char *ft_strrchr(const char *s, int c)
{
    // Declaramos un puntero p para recorrer la cadena de caracteres.
    const char *p = s;
    const char *last = NULL;

    // Este bucle se ejecuta mientras que el carácter al que apunta p no sea el carácter nulo.
    // *p comprueba si hemos llegado al final de la cadena de caracteres.
    //(*p) es lo mismo que (*p > '\0')
    while (*p)
    {
        // Comprobamos si el carácter al que apunta p es igual al carácter que estamos buscando.
        // Si es así, guardamos la ubicación del carácter en la variable last.
        if (*p == (char)c)
            last = p;

        // Avanzamos al siguiente carácter en la cadena de caracteres.
        p++;
    }

    // Si el carácter que estamos buscando es el carácter nulo, devolvemos un puntero al final de la cadena de caracteres.
    if (*p == (char)c)
        return (char *)p;

    // Devolvemos un puntero al último carácter que hemos encontrado, o NULL si el carácter no se encuentra en la cadena de caracteres.
    return (char *)last;
}
