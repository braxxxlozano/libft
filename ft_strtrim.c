#include <libft.h>

// La función ft_strtrim se utiliza para eliminar los caracteres especificados al principio y al final de una cadena de caracteres.
char *ft_strtrim(const char *s1, const char *set)
{
    // Declaramos variables para almacenar los índices de inicio y final de la subcadena.
    size_t start;
    size_t end;

    // Verificamos si la cadena de entrada o el conjunto de caracteres a eliminar es NULL.
    if (!s1 || !set)
        return NULL;

    // Inicializamos el índice de inicio al principio de la cadena y el índice de final al final de la cadena.
    start = 0;
    end = ft_strlen(s1);

    // Avanzamos el índice de inicio mientras que el carácter actual esté en el conjunto de caracteres a eliminar.
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    // Retrocedemos el índice de final mientras que el carácter actual esté en el conjunto de caracteres a eliminar.
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    // Reservamos memoria para la subcadena resultante más uno para el carácter nulo final.
    char *str = malloc(end - start + 1);
    if (!str)
        return NULL;

    // Copiamos la subcadena resultante a la nueva cadena reservada.
    ft_strlcpy(str, &s1[start], end - start + 1);

    // Devolvemos el puntero a la subcadena resultante.
    return str;
}
