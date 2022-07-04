#include "libft.h"

int ft_find_next_prime(int nb)
{
    int i;

    i = nb;
    if (nb <= 1)
        return (2);
    while (!ft_is_prime(i))
        i++;
    return (i);
}