#include <libft.h>

// La función ft_putstr_fd escribe la cadena de caracteres 's' en el descriptor de archivo proporcionado.
void ft_putstr_fd(char *s, int fd)
{
    // Declaramos una variable para el índice.
    unsigned int i;

    // Inicializamos el índice a 0.
    i = 0;

    // Este bucle se ejecuta mientras que el carácter al que apunta s no sea el carácter nulo.
    while (s[i])
    {
        // Utilizamos la función write para escribir el carácter actual en el descriptor de archivo 'fd'.
        // La función write toma tres argumentos: el descriptor de archivo en el que escribir, 
        // el buffer desde el que obtener los datos, y el número de bytes a escribir.
        // En este caso, el descriptor de archivo es 'fd', el buffer es la dirección del carácter actual, 
        // y el número de bytes a escribir es 1, ya que sólo estamos escribiendo un carácter.
        write(fd, &s[i], 1);

        // Avanzamos al siguiente carácter en la cadena de caracteres.
        i++;
    }

    // La función no devuelve nada.
}
