#include <libft.h>

// La función ft_split se utiliza para dividir una cadena de caracteres en un arreglo de subcadenas basado en un carácter delimitador.
char **ft_split(const char *s, char c)
{
    // Declaramos variables para almacenar el arreglo de subcadenas y los índices.
    char **array; // Puntero al arreglo de subcadenas.
    size_t i;     // Índice para el arreglo de subcadenas.
    size_t j;     // Índice para la longitud de la subcadena.

    // Verificamos si la cadena de entrada es NULL.
    if (!s)
        return NULL; // Si s es NULL, no hay nada que dividir, devolvemos NULL.

    // Reservamos memoria para el arreglo de subcadenas.
    array = malloc((ft_count_words(s, c) + 1) * sizeof(char *)); // +1 para el puntero NULL final.
    if (!array)
        return NULL; // Si la reserva falla, devolvemos NULL.

    i = 0; // Inicializamos el índice del arreglo a 0.
    while (*s) // Mientras haya caracteres en la cadena.
    {
        // Buscamos el inicio de la próxima subcadena.
        while (*s == c) // Saltamos los delimitadores al principio.
            s++;
        if (*s == '\0') // Si llegamos al final de la cadena, terminamos el bucle.
            break;
        j = 0; // Inicializamos el índice de la subcadena a 0.
        // Contamos la longitud de la subcadena.
        while (s[j] && s[j] != c) // Incrementamos j hasta encontrar otro delimitador o el final de la cadena.
            j++;
        // Reservamos memoria y copiamos la subcadena al arreglo.
        array[i] = ft_strndup(s, j); // Duplicamos la subcadena encontrada.
        if (!array[i]) // Si la reserva falla.
        {
            ft_free_array(array, i); // Liberamos la memoria reservada hasta ahora.
            return NULL; // Devolvemos NULL.
        }
        // Avanzamos la cadena de entrada y continuamos con la próxima subcadena.
        s += j; // Avanzamos s para saltar la subcadena que acabamos de procesar.
        i++; // Incrementamos el índice del arreglo para la próxima subcadena.
    }
    // Terminamos el arreglo con un puntero NULL.
    array[i] = NULL; // Añadimos el puntero NULL al final del arreglo.

    // Devolvemos el arreglo de subcadenas.
    return array; // El arreglo de subcadenas está listo para ser utilizado.
}

// Función auxiliar para contar las palabras en la cadena basado en el delimitador.
size_t ft_count_words(const char *s, char c)
{
    size_t count = 0; // Contador de palabras.
    while (*s) // Mientras haya caracteres en la cadena.
    {
        while (*s == c) // Saltamos los delimitadores al principio.
            s++;
        if (*s != '\0') // Si encontramos un carácter que no es delimitador.
            count++; // Incrementamos el contador de palabras.
        while (*s && *s != c) // Saltamos los caracteres hasta el próximo delimitador o el final de la cadena.
            s++;
    }
    return count; // Devolvemos el número total de palabras.
}

// Función auxiliar para liberar el arreglo de subcadenas en caso de error.
void ft_free_array(char **array, size_t size)
{
    while (size--) // Mientras haya elementos en el arreglo.
        free(array[size]); // Liberamos cada subcadena.
    free(array); // Liberamos el arreglo.
}
