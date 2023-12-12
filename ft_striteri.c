#include <libft.h>

// La función ft_striteri aplica la función f a cada carácter de la cadena de caracteres pasada como argumento.
// El primer argumento se pasa sin modificaciones a la función. Cada carácter se pasa por su índice como primer argumento a la función.
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    // Declaramos una variable para el índice.
    unsigned int i;

    // Inicializamos el índice a 0.
    i = 0;

    // Este bucle se ejecuta mientras que el carácter al que apunta s no sea el carácter nulo.
    while (s[i])
    {
        // Aplicamos la función f al carácter actual y su índice.
        f(i, &s[i]);

        // Avanzamos al siguiente carácter en la cadena de caracteres.
        i++;
    }

    // La función no devuelve nada.
}

// otra forma de hacerlo 
#include <libft.h>

// La función ft_striteri aplica la función 'f' a cada carácter de la cadena 's'
// junto con el índice del carácter.
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    // Declaramos una variable para el índice.
    unsigned int i; // Índice para recorrer la cadena 's'.

    // Verificamos si la cadena de entrada es NULL o si la función 'f' no está definida.
    if (!s || !f)
        return; // Si 's' o 'f' son NULL, no hay nada que procesar, terminamos la función.

    // Aplicamos la función 'f' a cada carácter de 's'.
    i = 0; // Inicializamos el índice a 0.
    while (s[i]) // Mientras haya carácteres en 's'.
    {
        // Aplicamos 'f' al carácter actual pasando el índice y la dirección del carácter.
        f(i, &s[i]);
        i++; // Incrementamos el índice para pasar al siguiente carácter.
    }
    // No hay retorno ya que la función es de tipo void.
}
