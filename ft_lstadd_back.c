#include <libft.h>

// La función ft_lstadd_back añade el elemento 'new' al final de la lista.
void ft_lstadd_back(t_list **lst, t_list *new)
{
    // Si la lista está vacía, hacemos que 'new' sea el primer elemento de la lista.
    if (!*lst)
    {
        *lst = new;
    }
    else
    {
        // Si la lista no está vacía, encontramos el último elemento de la lista.
        t_list *last_elem = ft_lstlast(*lst);

        // Añadimos 'new' después del último elemento de la lista.
        last_elem->next = new;
    }

    // La función no devuelve nada.
}
