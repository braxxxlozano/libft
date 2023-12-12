#include <libft.h>

// La función ft_lstnew crea un nuevo elemento de lista.
t_list *ft_lstnew(void *content)
{
    // Declaramos un puntero para el nuevo elemento de la lista.
    t_list *new_elem;

    // Asignamos memoria para el nuevo elemento de la lista.
    // Si la asignación de memoria falla, devolvemos NULL.
    if (!(new_elem = (t_list *)malloc(sizeof(t_list))))
        return (NULL);

    // Asignamos el contenido al nuevo elemento de la lista.
    // Si el contenido es NULL, asignamos NULL al contenido del nuevo elemento.
    if (!content)
        new_elem->content = NULL;
    else
        new_elem->content = content;

    // Inicializamos el puntero al siguiente elemento de la lista a NULL.
    new_elem->next = NULL;

    // Devolvemos el nuevo elemento de la lista.
    return (new_elem);
}
