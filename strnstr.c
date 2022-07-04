#include "libft.h"

char    *ft_stnstr(const char *str, const char *to_find, size_t size)
{
	size_t i;
    size_t j;

    i = 0;
    if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && size > j )
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}