#include <libft.h>

// La función ft_strnstr se utiliza para buscar la primera aparición de una cadena de caracteres (needle) en otra cadena de caracteres (haystack), examinando solo los primeros n caracteres de haystack.
char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    // Si needle es una cadena de caracteres vacía, devolvemos haystack. es lo mismo if (*needle != '\0').
    if (!*needle)
        return (char *)haystack;

    // Declaramos dos punteros p1 y p2 para recorrer las cadenas de caracteres.
    const char *p1;
    const char *p2;

    // Este bucle se ejecuta mientras que haystack no llegue al carácter nulo y n sea mayor que 0.
    while (*haystack && n--)
    {
        // Si el primer carácter de needle coincide con el carácter actual de haystack, comprobamos el resto de needle.
        if (*haystack == *needle)
        {
            // Inicializamos p1 y p2 para recorrer haystack y needle respectivamente.
            p1 = haystack;
            p2 = needle;

            // Este bucle se ejecuta mientras que los caracteres a los que apuntan p1 y p2 sean iguales y p2 no llegue al carácter nulo.
            while (*p1 && *p2 && *p1 == *p2)
            {
                p1++;
                p2++;
            }

            // Si hemos llegado al final de needle (es decir, p2 apunta al carácter nulo), hemos encontrado una coincidencia.
            // Devolvemos un puntero al inicio de la coincidencia en haystack.
            if (!*p2)
                return (char *)haystack;
        }

        // Avanzamos al siguiente carácter en haystack.
        haystack++;
    }

    // Si no encontramos needle en haystack, devolvemos NULL.
    return NULL;
}
