#include "libft.h"

void    ft_putstr_fd(char const *str, int fd)
{
    int i;

    i = -1;
    if (str)
        while (str[++i])
            write(fd, &str[i], 1);
}