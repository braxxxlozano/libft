#include <libft.h>

// La función ft_itoa se utiliza para convertir un número entero en una cadena de caracteres.
char *ft_itoa(int n)
{
    // Declaramos variables para almacenar la cadena resultante y los índices.
    char *str; // Puntero a la cadena resultante.
    int len;   // Longitud de la cadena resultante.
    int temp;  // Variable temporal para el número.

    // Calculamos la longitud necesaria para la cadena resultante.
    len = ft_numlen(n); // Utilizamos una función auxiliar para calcular la longitud.
    str = malloc(len + 1); // Reservamos memoria para la cadena más uno para el carácter nulo final.
    if (!str)
        return NULL; // Si la reserva falla, devolvemos NULL.

    str[len] = '\0'; // Añadimos el carácter nulo al final de la cadena.
    temp = n; // Utilizamos una variable temporal para manipular el número.
    if (n == 0) // Si el número es 0.
        str[0] = '0'; // La cadena resultante es simplemente "0".
    else if (n < 0) // Si el número es negativo.
        str[0] = '-'; // Añadimos el signo negativo al principio de la cadena.

    // Convertimos cada dígito del número a su representación en carácter.
    while (temp != 0) // Mientras haya dígitos para procesar.
    {
        len--; // Decrementamos la longitud para ir de atrás hacia adelante.
        str[len] = ft_abs(temp % 10) + '0'; // Convertimos el dígito a carácter y lo añadimos a la cadena.
        temp /= 10; // Dividimos el número por 10 para obtener el siguiente dígito.
    }

    // Devolvemos el puntero a la cadena resultante.
    return str; // La cadena que representa el número entero está lista para ser utilizada.
}

// Función auxiliar para calcular la longitud de la cadena que representará el número.
int ft_numlen(int n)
{
    int len = 0; // Inicializamos la longitud a 0.
    if (n <= 0) // Si el número es 0 o negativo.
        len = 1; // Necesitamos al menos un carácter para el "0" o el signo negativo.
    while (n != 0) // Mientras haya dígitos para procesar.
    {
        len++; // Incrementamos la longitud por cada dígito.
        n /= 10; // Dividimos el número por 10 para obtener el siguiente dígito.
    }
    return len; // Devolvemos la longitud calculada.
}

// Función auxiliar para obtener el valor absoluto de un número.
int ft_abs(int n)
{
    if (n < 0) // Si el número es negativo.
        return -n; // Devolvemos el valor positivo.
    return n; // Si no es negativo, lo devolvemos tal cual.
}
