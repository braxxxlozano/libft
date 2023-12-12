#include <libft.h>

// La función ft_lstlast devuelve el último elemento de la lista.
t_list *ft_lstlast(t_list *lst)
{
    // Si la lista está vacía, devolvemos NULL.
    if (!lst)
        return (NULL);

    // Este bucle se ejecuta mientras que el siguiente elemento de la lista no sea NULL.
    while (lst->next)
    {
        // Avanzamos al siguiente elemento en la lista.
        lst = lst->next;
    }

    // Devolvemos el último elemento de la lista.
    return (lst);
}
