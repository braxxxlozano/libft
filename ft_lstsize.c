#include <libft.h>

// La función ft_lstsize cuenta el número de elementos en una lista.
int ft_lstsize(t_list *lst)
{
    // Declaramos una variable para el contador.
    int count;

    // Inicializamos el contador a 0.
    count = 0;

    // Este bucle se ejecuta mientras que el elemento actual de la lista no sea NULL.
    while (lst)
    {
        // Incrementamos el contador.
        count++;

        // Avanzamos al siguiente elemento en la lista.
        lst = lst->next;
    }

    // Devolvemos el contador, que es el número de elementos en la lista.
    return (count);
}
