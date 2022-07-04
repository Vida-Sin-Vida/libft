#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    str = src;
    while (n--)
    {
        dest[i] = str[i];
        i++;
    }
}