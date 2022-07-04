#include "libft.h"

char    *ft_strchr(const char *string, int searchedChar)
{
    int i;

    i = -1;
    if (!string)
        return (NULL);
    while(string[++i])
        if (string[i] == (char)searchedChar)
            return ((char *)&string[i]);
    if (string[i] == (char)searchedChar)
        return ((char *)&string[i]);
    return (NULL);
}