#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sizeS1;
	size_t	sizeS2;
	size_t	i;
	size_t	j;
	char	*dest;

	sizeS1 = ft_strlen(s1);
	sizeS2 = ft_strlen(s2);
	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	if (!(dest = malloc(sizeof(char) * (sizeS1 + sizeS2 + 1))))
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++j])
		dest[i++] = s2[j];
	dest[i] = '\0';
	return (dest);
}