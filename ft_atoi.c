/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:55:06 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/23 17:55:09 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// La función ft_atoi se utiliza para convertir una cadena de caracteres en un número entero.
int ft_atoi(const char *str)
{
    // Declaramos una variable para almacenar el resultado y una variable para almacenar el signo del número.
    int result = 0;
    int sign = 1;

    // Saltamos los espacios en blanco al principio de la cadena de caracteres.
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;

    // Comprobamos si el primer carácter no es un espacio en blanco es un signo de más o de menos.
    // Si es así, actualizamos la variable sign y avanzamos a la siguiente posición en la cadena de caracteres.
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    // Este bucle se ejecuta mientras que el carácter actual sea un dígito.
    while (*str >= '0' && *str <= '9')
    {
        // Actualizamos el resultado multiplicándolo por 10 y sumándole el valor del dígito actual.
        result = result * 10 + (*str - '0');

        // Avanzamos a la siguiente posición en la cadena de caracteres.
        str++;
    }

    // Devolvemos el resultado multiplicado por el signo para obtener el número entero correcto.
    return result * sign;
}
