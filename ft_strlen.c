#include <libft.h>
size_t  ft_strlen (const char  *str)
{
    int  i;
    i = 0;
    while (str[i] != '\0')
    i++;
    return (i);
}

// FORMA DE HACERLO USANDO UN PUNTERO
//#include <libft.h>

//size_t ft_strlen(const char *str) {
    // s es un punture que inicia apuntando al primer caracter
  //  const char *s = str;
    //while (*s != '\0') 
    //{
      //  ++s;
    //}
    //return s - str;
//}
