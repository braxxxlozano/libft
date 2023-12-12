#include <libft.h>

// La función ft_lstclear borra y libera la memoria de la lista.
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    // Declaramos un puntero para el elemento actual y el siguiente elemento de la lista.
    t_list *current;
    t_list *next;

    // Si 'lst', '*lst' o 'del' son NULL, no hacemos nada.
    if (!lst || !*lst || !del)
        return;

    // Asignamos el primer elemento de la lista a 'current'.
    current = *lst;

    // Este bucle se ejecuta mientras que 'current' no sea NULL.
    while (current)
    {
        // Asignamos el siguiente elemento de la lista a 'next'.
        next = current->next;

        // Llamamos a la función 'del' para liberar la memoria del contenido del elemento actual de la lista.
        del(current->content);

        // Liberamos la memoria del elemento actual de la lista.
        free(current);

        // Avanzamos al siguiente elemento en la lista.
        current = next;
    }

    // Ponemos el puntero a la lista a NULL.
    *lst = NULL;

    // La función no devuelve nada.
}
