#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char   *str;
    size_t          i;

    str = src;
    i = 0;
    while (str[i] != c || n > i)
    {
        dest[i] = str[i]
        i++;
    }
}