/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:29:12 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/23 16:29:15 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// La función ft_strchr se utiliza para buscar un carácter en una cadena de caracteres.
char *ft_strchr(const char *s, int c)
{
    // Declaramos un puntero p para recorrer la cadena de caracteres.
    char *p = s;

    // Este bucle se ejecuta mientras que el carácter al que apunta p no sea el carácter nulo.
    // *p comprueba si hemos llegado al final de la cadena de caracteres.
    while (*p)
    {
        // Comprobamos si el carácter al que apunta p es igual al carácter que estamos buscando.
        // Si es así, devolvemos un puntero al carácter en la cadena de caracteres.
        if (*p == (char)c)
            return (char *)p;

        // Avanzamos al siguiente carácter en la cadena de caracteres.
        p++;
    }

    // Si el carácter que estamos buscando es el carácter nulo, devolvemos un puntero al final de la cadena de caracteres.
    if (*p == (char)c)
        return (char *)p;

    // Si no encontramos el carácter en la cadena de caracteres, devolvemos NULL.
    return NULL;
}
