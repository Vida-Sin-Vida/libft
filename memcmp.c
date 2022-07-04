#include "libft.h"

int ft_memcmp(const void *pointeur1, const void *pointeur2, size_t size)
{
    unsigned void   *p1;
    unsigned void   *p2;

    p1 = pointeur1;
    p2 = pointeur2;
    while (size--)
    {
        if (p1 == p2)
        {
            p1++;
            p2++;
        }
        else
            return (p1 - p2);
    }
}