#include <libft.h>

// La función ft_strmapi aplica la función 'f' a cada carácter de la cadena 's'
// para crear una nueva cadena con los caracteres resultantes de la aplicación de 'f'.
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    // Declaramos variables para almacenar la cadena resultante y el índice.
    char *str; // Puntero a la cadena resultante.
    size_t i;  // Índice para recorrer la cadena 's'.

    // Verificamos si la cadena de entrada es NULL o si la función 'f' no está definida.
    if (!s || !f)
        return NULL; // Si 's' o 'f' son NULL, no hay nada que procesar, devolvemos NULL.

    // Reservamos memoria para la nueva cadena del tamaño de 's' más uno para el carácter nulo final.
    str = malloc(ft_strlen(s) + 1);
    if (!str)
        return NULL; // Si la reserva falla, devolvemos NULL.

    // Aplicamos la función 'f' a cada carácter de 's'.
    i = 0; // Inicializamos el índice a 0.
    while (s[i]) // Mientras haya carácteres en 's'.
    {
        // Aplicamos 'f' al carácter actual y almacenamos el resultado en 'str'.
        str[i] = f(i, s[i]);
        i++; // Incrementamos el índice para pasar al siguiente carácter.
    }
    // Añadimos el carácter nulo al final de la cadena resultante.
    str[i] = '\0';

    // Devolvemos el puntero a la cadena resultante.
    return str; // La cadena con los carácteres modificados por 'f' está lista para ser utilizada.
}
#include <libft.h>

// La función ft_strmapi aplica la función 'f' a cada carácter de la cadena 's'
// para crear una nueva cadena con los caracteres resultantes de la aplicación de 'f'.
char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    // Declaramos variables para almacenar la cadena resultante y el índice.
    char *str; // Puntero a la cadena resultante.
    size_t i;  // Índice para recorrer la cadena 's'.

    // Verificamos si la cadena de entrada es NULL o si la función 'f' no está definida.
    if (!s || !f)
        return NULL; // Si 's' o 'f' son NULL, no hay nada que procesar, devolvemos NULL.

    // Reservamos memoria para la nueva cadena del tamaño de 's' más uno para el carácter nulo final.
    str = malloc(ft_strlen(s) + 1);
    if (!str)
        return NULL; // Si la reserva falla, devolvemos NULL.

    // Aplicamos la función 'f' a cada carácter de 's'.
    i = 0; // Inicializamos el índice a 0.
    while (s[i]) // Mientras haya carácteres en 's'.
    {
        // Aplicamos 'f' al carácter actual y almacenamos el resultado en 'str'.
        str[i] = f(i, s[i]);
        i++; // Incrementamos el índice para pasar al siguiente carácter.
    }
    // Añadimos el carácter nulo al final de la cadena resultante.
    str[i] = '\0';

    // Devolvemos el puntero a la cadena resultante.
    return str; // La cadena con los carácteres modificados por 'f' está lista para ser utilizada.
}
