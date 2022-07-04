#include "libft.h"

void    *ft_memset(void *src, int value, size_t count)
{
    unsigned char *str;

    str = src;
    i = 0;
    while (count--)
        str[++i] = value;
}