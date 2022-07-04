#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t size)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    str = src;
    while (size > i)
    {
        dest[i] = str[i];
        i++;
    }
}