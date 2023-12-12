#include <libft.h>

// La función ft_tolower se utiliza para convertir un carácter en mayúscula a minúscula.
int ft_tolower(int c)
{
    // Comprobamos si el carácter es una letra mayúscula.
    // Si es así, lo convertimos a minúscula sumando 32 al carácter.
    // Si no es una letra mayúscula, simplemente devolvemos el carácter tal como está.
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else
        return c;
}
