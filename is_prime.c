#include "libft.h"

int ft_is_prime(int nb)
{
    int i;
    
    i = 2;
    if (nb <= 1)
        return (0);
    while (i++ <= nb / i)
        if (nb % 1 == 0)
            return (0);
    return (1);
}