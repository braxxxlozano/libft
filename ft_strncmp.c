#include <libft.h>

// La función ft_strncmp se utiliza para comparar dos cadenas de caracteres hasta n caracteres.
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    // Declaramos una variable i para usarla como contador en el bucle.
    // Esta variable nos ayudará a recorrer cada carácter en las cadenas de caracteres.
    size_t i = 0;

    // Este bucle se ejecuta mientras que i sea menor que n, y los caracteres en las posiciones i de las cadenas de caracteres no sean el carácter nulo.
    // s1[i] y s2[i] comprueban si hemos llegado al final de las cadenas de caracteres.
    while (i < n && (s1[i] || s2[i]))
    {
        // Comparamos los caracteres en las posiciones i de las cadenas de caracteres.
        // Si no son iguales, devolvemos la diferencia entre ellos.
        if (s1[i] != s2[i])
            return (unsigned char)s1[i] - (unsigned char)s2[i];

        // Avanzamos al siguiente carácter en las cadenas de caracteres.
        i++;
    }

    // Si los primeros n caracteres de las cadenas de caracteres son iguales, devolvemos 0.
    return 0;
}
