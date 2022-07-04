#include "libft.h"

char    *strrchr(const char *string, int searchedChar)
{
    int i;

    i = ft_strlen(string + 1);
    if (!string)
        return (NULL);
    while (string[--i])
    {
        if (string[i] == (char)searchedChar)
            return ((char *)&string[i]);
    }
    if (string[i] == (char)searchedChar)
        return ((char *)&string[i]);
    return (NULL);
}