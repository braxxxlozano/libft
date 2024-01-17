#include <libft.h>

// La función ft_strjoin se utiliza para concatenar dos cadenas de caracteres.
char *ft_strjoin(const char *s1, const char *s2)
{
    // Declaramos un puntero para almacenar la dirección de la cadena resultante.
    char	*str;
    size_t len 
len = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = malloc(len);
    // Verificamos si alguna de las cadenas de entrada es NULL.
    if (!s1 || !s2)
        return NULL;

    // Calculamos la longitud total de la nueva cadena que será la suma de las longitudes de ambas cadenas.

    // Reservamos memoria para la nueva cadena más uno para el carácter nulo final.
    if (!str)
        return NULL;

    // Copiamos la primera cadena a la nueva cadena reservada.
    ft_strcpy(str, s1);

    // Concatenamos la segunda cadena al final de la nueva cadena.
    ft_strcat(str, s2);

    // Devolvemos el puntero a la cadena resultante.
    return str;
}
