#include <libft.h>

// La función ft_strdup se utiliza para duplicar una cadena de caracteres.
char *ft_strdup(const char *s1)
{
    // Declaramos un puntero para almacenar la dirección de la cadena duplicada.
    char *dup;

    // Calculamos la longitud de la cadena original más uno para el carácter nulo final.
    size_t len = ft_strlen(s1) + 1;

    // Reservamos memoria para la cadena duplicada utilizando malloc y verificamos si la reserva fue exitosa.
    dup = malloc(len);
    if (!dup)
        return NULL;

    // Copiamos la cadena original a la nueva cadena reservada utilizando ft_memcpy o una función similar.
    ft_memcpy(dup, s1, len);

    // Devolvemos el puntero a la cadena duplicada.
    return dup;
}
