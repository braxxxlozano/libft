#include <libft.h>

// La función ft_lstdelone libera la memoria del elemento pasado como argumento y pone el puntero a NULL.
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    // Si 'lst' o 'del' son NULL, no hacemos nada.
    if (!lst || !del)
        return;

    // Llamamos a la función 'del' para liberar la memoria del contenido del elemento de la lista.
    del(lst->content);

    // Liberamos la memoria del elemento de la lista.
    free(lst);

    // Ponemos el puntero a NULL.
    lst = NULL;

    // La función no devuelve nada.
}
