#include "libft.h"

int ft_isdigit(char c)
{
    if ((c >= 48 && c <= 57))
        return (1);
    if else ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}