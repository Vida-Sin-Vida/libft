#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*dest;

	dest = malloc(size + 1);
	if (dest != NULL)
	{
		ft_memset(dest, '\0', size);
	}
	return (dest);
}