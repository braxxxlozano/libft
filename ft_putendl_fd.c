#include <libft.h>

// La función ft_putendl_fd escribe la cadena de caracteres 's' y un salto de línea en el descriptor de archivo proporcionado.
void ft_putendl_fd(char *s, int fd)
{
    // Si 's' no es NULL, entonces procedemos a escribir la cadena de caracteres.
    if (s)
    {
        // Utilizamos la función write para escribir la cadena de caracteres 's' en el descriptor de archivo 'fd'.
        // La función write toma tres argumentos: el descriptor de archivo en el que escribir, 
        // el buffer desde el que obtener los datos, y el número de bytes a escribir.
        // En este caso, el descriptor de archivo es 'fd', el buffer es 's', 
        // y el número de bytes a escribir es la longitud de la cadena de caracteres 's'.
        write(fd, s, ft_strlen(s));

        // Después de escribir la cadena de caracteres, escribimos un salto de línea en el descriptor de archivo 'fd'.
        write(fd, "\n", 1);
    }

    // La función no devuelve nada.
}
