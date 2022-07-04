#include "libft.h"

void    *ft_calloc(size_t n, size_t size)
{
    char            *dest;
    unsigned int    total;
    unsigned int    i;

    total = n * size;
    if (!(dest = malloc(total)))
        return (NULL);
    i = 0;
    while (total--)
    {
        dest[i] = 0;
        i++;
    }
    return ((void *)dest);
}