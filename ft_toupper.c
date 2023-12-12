#include <libft.h>

// La función ft_toupper se utiliza para convertir un carácter en minúscula a mayúscula.
int ft_toupper(int c)
{
    // Comprobamos si el carácter es una letra minúscula.
    // Si es así, lo convertimos a mayúscula sumando la diferencia entre 'a' y 'A' al carácter.
    // Si no es una letra minúscula, simplemente devolvemos el carácter tal como está.
    if (c >= 'a' && c <= 'z')
    // return c - 32 tambien se puede hacer en caso de saber el valor.
        return c - ('a' - 'A');
    else
        return c;
}
