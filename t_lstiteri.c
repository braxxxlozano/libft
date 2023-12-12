#include <libft.h>

// La función ft_lstiter itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo.
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    // Este bucle se ejecuta mientras que el nodo actual de la lista no sea NULL.
    while (lst)
    {
        // Aplicamos la función 'f' al contenido del nodo actual de la lista.
        f(lst->content);

        // Avanzamos al siguiente nodo en la lista.
        lst = lst->next;
    }

    // La función no devuelve nada.
}
