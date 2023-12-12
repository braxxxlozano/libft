#include <libft.h>

// La función ft_putnbr_fd escribe el número 'n' en el descriptor de archivo proporcionado.
void ft_putnbr_fd(int n, int fd)
{
    // Si 'n' es menor que 0, escribimos el carácter '-' y cambiamos el signo de 'n'.
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }

    // Si 'n' es mayor o igual a 10, llamamos recursivamente a la función con 'n' dividido por 10.
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);

    // Escribimos el último dígito de 'n' en el descriptor de archivo 'fd'.
    ft_putchar_fd((n % 10) + '0', fd);

    // La función no devuelve nada.
}
