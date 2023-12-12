#include "libft.h" // Incluye la biblioteca "libft.h"

void	ft_bzero(void *s, size_t n)
// Define una función llamada "ft_bzero" que toma dos argumentos: un puntero a una zona de memoria (s) y el número de bytes a poner a cero (n)
{
	size_t	i;
    // Declara una variable "i" de tipo size_t (un tipo de dato que puede almacenar el tamaño de cualquier objeto en bytes)
	char	*str;
    // Declara un puntero a char llamado "str"

	i = 0;
    // Inicializa "i" a 0
	str = s;
    // Asigna el valor de "s" a "str"

	while (i < n)
    {
    // Mientras "i" incrementado en 1 sea menor que "n"...
		str[i] = '\0';
        // ...asigna el valor '\0' al byte en la posición "i" de la zona de memoria apuntada por "str"
        i++
    }
}
void ft_bzero(void *s, size_t n)
{
    // Define una función llamada "ft_bzero" que toma dos argumentos: un puntero a una zona de memoria (s) y el número de bytes a poner a cero (n)
    size_t i;
    // Declara una variable "i" de tipo size_t

    i = 0;
    // Inicializa "i" a 0

    while (i < n)
    { // Mientras "i" sea menor que "n"...
        ((char *)s)[i] = '0'; // ...asigna el valor '0' al byte en la posición "i" de la zona de memoria apuntada por "s"
        i++; // Incrementa "i" en 1
    }
}
