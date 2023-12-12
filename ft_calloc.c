#include <libft.h>

// La función ft_calloc se utiliza para reservar memoria para un arreglo de elementos,
// cada uno de un tamaño especificado, y para inicializar todos los bytes de la memoria a cero.
void *ft_calloc(size_t count, size_t size)
{
    // Declaramos un puntero para almacenar la dirección de la memoria reservada.
    void *ptr;

    // Verificamos si alguno de los parámetros es 0, lo que resultaría en una reserva de memoria innecesaria.
    if (count == 0 || size == 0)
        return NULL;

    // Calculamos el tamaño total de la memoria que necesitamos reservar.
    size_t total_size = count * size;

    // Verificamos si hay un desbordamiento en la multiplicación.
    if (total_size / count != size)
        return NULL;

    // Reservamos la memoria utilizando malloc y verificamos si la reserva fue exitosa.
    ptr = malloc(total_size);
    if (!ptr)
        return NULL;

    // Inicializamos la memoria reservada a cero utilizando ft_bzero o una función similar.
    ft_bzero(ptr, total_size);

    // Devolvemos el puntero a la memoria reservada e inicializada.
    return ptr;
}
