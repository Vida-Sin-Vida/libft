#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(const char *src)
{
    char    *dest;
    int     i;

    i = 0;
    while (src[i])
        i++;
    if (!(dest = malloc(sizeof(char) * i)))
        return (NULL);
    i = -1;
    while (dest[++i])
        src[i] = dest[i];
    dest[i] = '\0';
    return (dest);
}