#include "libft.h"

char    *strtrim(char *str)
{
    char    *dest;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (ft_isspace(str[i]) == 1)
    {
        while (ft_isspace(str[i]) == 1)
            i++;
    }
    while (str[i] != ' ' || str[i] != '\t')
    {
        dest[j] = str[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}