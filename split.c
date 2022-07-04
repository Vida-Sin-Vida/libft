#include "libft.h"

static int	count_words(const char *str, char c)
{
	int i;
	int lock;

	i = 0;
	lock = 0;
	while (*str)
	{
		if (*str != c && lock == 0)
		{
			lock = 1;
			i++;
		}
		else if (*str == c)
			lock = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *str, char c)
{
	size_t	i;
	size_t	j;
	int		size;
	char	**dest;

	if (!str || !(dest = malloc((count_words(str, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	size = -1;
	while (i <= ft_strlen(s))
	{
		if (str[i] != c && size < 0)
			size = i;
		else if ((str[i] == c || i == ft_strlen(str)) && size >= 0)
		{
			dest[j++] = word_dup(str, size, i);
			size = -1;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}