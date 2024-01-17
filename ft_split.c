/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:41:32 by blozano-          #+#    #+#             */
/*   Updated: 2023/12/25 15:48:02 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char **ft_split(const char *s, char c)
{
    char **array;
    size_t i, count;
    char *start, *end;

    if (!s)
        return NULL;

    // Contamos las palabras en la cadena basado en el delimitador.
    count = 0;
    start = (char *)s;
    while (*start)
    {
        while (*start == c)
            start++;
        if (*start != '\0')
            count++;
        while (*start && *start != c)
            start++;
    }

    array = malloc((count + 1) * sizeof(char *));
    if (!array)
        return NULL;

    start = (char *)s;
    i = 0;
    while (*start)
    {
        while (*start == c)
            start++;
        if (*start == '\0')
            break;

        end = start;
        while (*end && *end != c)
            end++;

        array[i] = ft_substr(start, 0, end - start);
        if (!array[i])
        {
            while (i--)
                free(array[i]);
            free(array);
            return NULL;
        }
        start = end;
        i++;
    }
    array[i] = NULL;

    return array;
}
