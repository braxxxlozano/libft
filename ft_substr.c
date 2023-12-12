#include <libft.h>

// La función ft_substr se utiliza para crear una subcadena a partir de una cadena dada.
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    // Declaramos un puntero para almacenar la dirección de la subcadena.
    char *substr;

    // Verificamos si la cadena de entrada es NULL.
    if (!s)
        return NULL;

    // Calculamos la longitud de la cadena de entrada.
    size_t s_len = ft_strlen(s);

    // Ajustamos la longitud de la subcadena si el inicio más la longitud deseada excede la longitud de la cadena de entrada.
    if (start + len > s_len || start >= s_len)
        len = s_len - start;

    // Reservamos memoria para la subcadena más uno para el carácter nulo final.
    substr = malloc(len + 1);
    if (!substr)
        return NULL;

    // Copiamos la porción deseada de la cadena de entrada a la subcadena utilizando ft_memcpy o una función similar.
    ft_memcpy(substr, s + start, len);

    // Añadimos el carácter nulo al final de la subcadena.
    substr[len] = '\0';

    // Devolvemos el puntero a la subcadena.
    return substr;
}
