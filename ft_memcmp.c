#include <libft.h>

// La función ft_memcmp se utiliza para comparar dos bloques de memoria.
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    // Declaramos dos punteros p1 y p2 para recorrer los bloques de memoria.
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    // Este bucle se ejecuta mientras que n sea mayor que 0.
    while (n--)
    {
        // Comparamos los bytes a los que apuntan p1 y p2.
        // Si no son iguales, devolvemos la diferencia entre ellos.
        if (*p1 != *p2)
            return *p1 - *p2;

        // Avanzamos al siguiente byte en los bloques de memoria.
        p1++;
        p2++;
    }

    // Si los primeros n bytes de los bloques de memoria son iguales, devolvemos 0.
    return 0;
}
