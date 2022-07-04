#include "libft.h"

char    *ft_substr(const char *str, int offset, size_t size)
{
	size_t  i;
	size_t  j;
	char    *dest;

    i = 0;
    j = 0;
	if (!(dest = malloc(sizeof(char *) * (size + 1))))
        return (NULL);
	while (dest[i])
	{
		if (i >= offset && j < size)
		{
			dest[j] = s[i];
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}