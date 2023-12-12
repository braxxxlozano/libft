#include <libft.h>

// La función ft_lstmap itera la lista 'lst' y aplica la función 'f' al contenido de cada nodo.
// Crea una nueva lista resultante de las aplicaciones sucesivas de 'f'.
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    // Declaramos un puntero para la nueva lista y un nuevo nodo.
    t_list *new_lst;
    t_list *new_node;

    // Si 'lst' o 'f' son NULL, devolvemos NULL.
    if (!lst || !f)
        return (NULL);

    // Creamos un nuevo nodo con el resultado de aplicar 'f' al contenido del primer nodo de 'lst'.
    new_node = ft_lstnew(f(lst->content));

    // Si la creación del nuevo nodo falla, devolvemos NULL.
    if (!new_node)
        return (NULL);

    // Asignamos el nuevo nodo a la nueva lista.
    new_lst = new_node;

    // Este bucle se ejecuta mientras que el siguiente nodo de 'lst' no sea NULL.
    while (lst->next)
    {
        // Avanzamos al siguiente nodo en 'lst'.
        lst = lst->next;

        // Creamos un nuevo nodo con el resultado de aplicar 'f' al contenido del nodo actual de 'lst'.
        new_node = ft_lstnew(f(lst->content));

        // Si la creación del nuevo nodo falla, liberamos la nueva lista y devolvemos NULL.
        if (!new_node)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }

        // Añadimos el nuevo nodo al final de la nueva lista.
        ft_lstadd_back(&new_lst, new_node);
    }

    // Devolvemos la nueva lista.
    return (new_lst);
}
