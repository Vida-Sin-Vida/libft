#include "libft.h"

int ft_strncmp(char *s1, char *s2, size_t n)
{
    while (n--)
    {
        if (*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else
            return (s1 - s2)
    }
}