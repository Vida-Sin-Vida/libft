#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t srcsize)
{
    size_t  destsize;
    size_t  i;

    if (!dest || !src)
        return (0);
    i = 0;
    destsize = ft_strlen(dest);
    if (srcsize != 0)
    {
        while (src[i] && i < (srcsize - 1))
        {
            dest[destsize + i] = src[i];
            i++;
        }
    }
    return (destsize);
}