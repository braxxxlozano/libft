#include "libft.h" // Incluye la biblioteca "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
// Esta es una función llamada "ft_memcpy". Toma tres cosas: un lugar donde copiar algo (dst), algo para copiar (src) y cuánto de ese algo copiar (n).
{
	size_t	i;
    // Esto es como un contador que usaremos para saber cuánto hemos copiado ya.
	char	*origin;
    // Esto es lo que vamos a copiar.
	char	*dest;
    // Este es el lugar donde vamos a copiar.

	if (dst == NULL && src == NULL && n != 0)
		return (NULL);
    // Si no tenemos un lugar donde copiar o no tenemos nada que copiar, entonces no hacemos nada y salimos de la función.
	i = 0;
    // Empezamos a contar desde 0.
	origin = (char *)src;
    //Queremos que origin y src apunten al mismo lugar, no que origin sea igual al valor al que src apunta. el segundo caso origin = (char )*src;
    // Preparamos lo que vamos a copiar.
	dest = (char *)dst;
    // Preparamos el lugar donde vamos a copiar.

	while (i < n)
    // Mientras no hayamos copiado todo...
	{
		dest[i] = origin[i];
        // ...copiamos un pedacito del origen al destino.
		i++;
        // Y contamos que hemos copiado un pedacito más.
	}

	return (dst);
    // Al final, devolvemos el lugar donde hemos copiado todo.
}
