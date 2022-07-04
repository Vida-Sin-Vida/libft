#include "libft.h"

int	count_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int num)
{
	char		*dest;
	int			size;
	int			i;
	long int	n;

	n = num;
	size = count_size(n);
	i = 0;
	if (n < 0 || size == 0)
		size++;
	if (!(dest = ft_strnew(size)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dest[0] = '-';
		i++;
	}
	while (size > i)
	{
		size--;
		dest[size] = (n % 10) + '0';
		n /= 10;
	}
	return (dest);
}