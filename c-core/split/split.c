#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
			words++;
		while (str[i] && !is_sep(str[i], charset))
			i++;
	}
	return (words);
}

char	*ft_substr(char *str, int start, int len)
{
	char	*sub;
	int		i;

	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	**split(char *str, char *charset)
{
	char	**split;
	int		size;
	int		i;
	int		start;
	int		end;
	int		len;

	size = count_words(str, charset);
	split = malloc((size + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	start = 0;
	while (str[start])
	{
		while (str[start] && is_sep(str[start], charset))
			start++;
		if (!str[start])
			break;
		end = start;
		while (str[end] && !is_sep(str[end], charset))
			end++;
		len = end - start;
		split[i] = ft_substr(str, start, len);
		i++;
		start = end;
	}
	split[i] = NULL;
	return (split);
}