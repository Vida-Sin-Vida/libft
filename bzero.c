#include "libft.h"

void    ft_bzero(void *src, size_t n)
{
    unsigned char *p;

    p = src;
    while (n--)
        *p++ = 0;
}