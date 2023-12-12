#include <stddef.h>

// La función ft_memmove se utiliza para copiar un bloque de memoria de un lugar a otro.
void *ft_memmove(void *dest, const void *src, size_t n)
{
    // Convertimos los punteros void* a punteros char* porque en C, un char es de 1 byte.
    // Esto nos permite copiar byte a byte.
    char *d = dest;
    const char *s = src;
    // esta decllaradoi en casop de que tenga que usar un while con un for no es necesario.
    size_t  i;
    i = 0;
    // Comprobamos si el puntero de destino es menor que el puntero de origen. (con el segundo bucle es suficiente pero este se hace por cuestion de eficiencia.)
    if (d < s)
    {
        for (size_t [i] = 0; i < n; i++)
        {
            // Si es así, copiamos los bytes de la fuente al destino de adelante hacia atrás.
            // Esto evita la sobreescritura de los datos de origen que aún no se han copiado en caso de que los bloques de memoria se solapen.
            d[i] = s[i];
        }
    }
    else
    {
        for (size_t i = n; i != 0; i--)
        {
            // Si el puntero de destino es mayor que el puntero de origen, copiamos los bytes de la fuente al destino de atrás hacia adelante.
            // De nuevo, esto es para manejar el caso en que los bloques de memoria se solapen.
            d[i-1] = s[i-1];
        }
    }

    // Finalmente, la función devuelve un puntero al bloque de memoria de destino.
    // Esto es útil para permitir el encadenamiento de operaciones de copia.
    return (dest);
}

// OTRA FORMA DE HACERLO


// Esta línea incluye la biblioteca "libft.h". Esta biblioteca puede contener definiciones y funciones que se utilizan en el código.
#include "libft.h"

// Aquí estamos definiendo una función llamada ft_reversecopy. Esta función toma tres argumentos: un puntero al bloque de memoria de destino (dst), un puntero al bloque de memoria de origen (src) y el número de bytes a copiar (n).
static void	*ft_reversecopy(void *dst, const void *src, size_t n)
{
	// Declaramos tres variables: i (un contador), origin (un puntero al bloque de memoria de origen) y dest (un puntero al bloque de memoria de destino).
	size_t	i;
	char	*origin;
	char	*dest;

	// Convertimos los punteros void* a punteros char* para copiar byte a byte.
	origin = (char *)src;
	dest = (char *)dst;

	// Inicializamos el contador i con el número de bytes a copiar menos uno.
	i = n - 1;

	// Este bucle se ejecuta mientras que i + 1 sea mayor que 0, es decir, mientras que i sea mayor o igual que 0.
	while (i + 1 > 0)
	{
		// Copiamos el byte en la posición i del bloque de memoria de origen al bloque de memoria de destino.
		dest[i] = origin[i];
		// Decrementamos el contador i en uno.
		i--;
	}

	// Devolvemos un puntero al bloque de memoria de destino.
	return (dst);
}

// Aquí estamos definiendo la función ft_memmove. Esta función también toma tres argumentos: un puntero al bloque de memoria de destino (dst), un puntero al bloque de memoria de origen (src) y el número de bytes a copiar (n).
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	// Declaramos una variable no (el número de bytes a copiar como un entero con signo).
	ssize_t	j;

	// Convertimos el tamaño a un entero con signo para poder hacer la comparación.
	j = (ssize_t)n;

	// Comprobamos si los bloques de memoria se solapan y el destino es mayor que la fuente.
	if (dst - src > 0 && dst - src < j)
		// Si es así, utilizamos ft_reversecopy para copiar los bytes.
		return (ft_reversecopy(dst, src, n));
	else
		// Si no, utilizamos ft_memcpy para copiar los bytes de adelante hacia atrás.
		return (ft_memcpy(dst, src, n));
}
