/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:34:32 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/22 13:37:35 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función ft_tolower se utiliza para convertir un carácter en mayúscula a minúscula.
int	ft_tolower(int c)
{
    // Comprobamos si el carácter es una letra mayúscula.
    // Si es así, lo convertimos a minúscula sumando 32 al carácter.
    // Si no es una letra mayúscula, simplemente devolvemos el carácter tal como está.
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
