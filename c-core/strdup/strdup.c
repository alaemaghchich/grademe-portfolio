#include <stdlib.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

char *gm_strdup(char *src)
{
	int i;
	int len;
	char *dup;

	i = 0;
	len = ft_strlen(src);
	dup = malloc(sizeof(char) * len);
	if (!dup)
	{
		return (NULL);
	}

	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return dup;
}
