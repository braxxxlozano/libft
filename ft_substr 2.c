/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:38:54 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/24 14:13:29 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función ft_substr se utiliza para crear una subcadena a partir de una cadena dada.
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;
    // Declaramos un puntero para almacenar la dirección de la subcadena.
	s_len = len - start;
	substr = NULL;
    // Verificamos si la cadena de entrada es NULL.
	if ((!s) || (start >= ft_strlen(s)))
		return (ft_strdup(""));
    // Calculamos la longitud de la cadena de entrada.
    // Ajustamos la longitud de la subcadena si el inicio más la longitud deseada excede la longitud de la cadena de entrada.
    // Reservamos memoria para la subcadena más uno para el carácter nulo final.
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

    // Copiamos la porción deseada de la cadena de entrada a la subcadena utilizando ft_memcpy o una función similar.
	ft_memcpy(substr, s + start, len);
    // Añadimos el carácter nulo al final de la subcadena.
	substr[len] = '\0';

    // Devolvemos el puntero a la subcadena.
	return (substr);
}

// int main (void)
// {
// char *s;
// s= "";
// unsigned int start;
// start = 20;
// size_t len = 0;
// char *f;

// f = ft_substr(s, start, len);
// printf("tutu, %s",f);

// return(0);
// }