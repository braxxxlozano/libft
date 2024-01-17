/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:25:36 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/23 14:46:40 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i = 0;
    size_t j = 0;
	
	if (n == 0)
        return (0);
	while (dst[i] && i < n)
        i++;
	 while (src[j] && (i + j < n - 1))
	{
		 dst[i + j] = src[j];
        j++;
	}
	if (i < n)
    	dst[i + j] = '\0';
	return (i + j);
}
int main (void)
{
	char src[30] = "HOLA";
	char dst[30] = "IRATXE";
	char dst2[20] = "IRATXE";

	printf("%zu\nSRC: %s\nDST: %s\n\n", ft_strlcat(dst, src, 2), src, dst);
	printf("%zu\nSRC: %s\nDST: %s\n", strlcat(dst2, src, 2), src, dst2);
    
}

/* // La función ft_strlcat se utiliza para concatenar una cadena de caracteres a otra.
size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    // Declaramos una variable i para usarla como contador en el bucle.
    // Esta variable nos ayudará a recorrer cada carácter en las cadenas de caracteres.
    size_t i = 0;
    size_t j = 0;

    // Comprobamos si el tamaño del destino es 0, en cuyo caso no hay nada que copiar.
    // Esto es importante porque no queremos intentar copiar a una cadena de caracteres que no tiene espacio para ningún carácter.
    if (n == 0)
        return (0);

    // Este bucle se ejecuta mientras que i sea menor que n - 1 y el carácter en la posición i de la fuente no sea el carácter nulo.
    // n - 1 asegura que siempre habrá espacio para el carácter nulo al final de la cadena de caracteres de destino.
    // dst[i] comprueba si hemos llegado al final de la cadena de caracteres de destino.
    while (dst[i] && i < n)
        i++;

    // Este bucle se ejecuta mientras que i + j sea menor que n - 1 y el carácter en la posición j de la fuente no sea el carácter nulo.
    // n - 1 asegura que siempre habrá espacio para el carácter nulo al final de la cadena de caracteres de destino.
    // src[j] comprueba si hemos llegado al final de la cadena de caracteres de origen.
    while (src[j] && (i + j < n - 1))
    {
        // Concatenamos el carácter en la posición j de la fuente al destino.
        // Esto se hace asignando el valor de src[j] a dst[i + j].
        dst[i + j] = src[j];
        j++;
    }

    // Si i es menor que n, añadimos el carácter nulo al final del destino para terminar la cadena de caracteres.
    // En C, las cadenas de caracteres siempre deben terminar con un carácter nulo, por eso hacemos esto.
    if (i < n)
        dst[i + j] = '\0';

    // Devolvemos el número de caracteres que hemos copiado.
    // Esto puede ser útil para el código que llama a esta función, porque le permite saber cuántos caracteres se han copiado realmente.
    return (i + j);
} */
