#include <libft.h>

// La función ft_lstadd_front añade el elemento 'new' al principio de la lista.
void ft_lstadd_front(t_list **lst, t_list *new)
{
    // Si 'new' es NULL, no hacemos nada.
    if (!new)
        return;

    // Asignamos al siguiente de 'new' el primer elemento de la lista actual.
    new->next = *lst;

    // Hacemos que 'new' sea el primer elemento de la lista.
    *lst = new;

    // La función no devuelve nada.
}
