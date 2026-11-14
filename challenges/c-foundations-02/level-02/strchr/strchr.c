#include <stddef.h>

char	*gm_strchr(const char *s, int c)
{
int i = 0;
while (s[i])
{
	if (s[i] == c)
		return ((char *)&s[i]);
	i++;
}
if (!s[i] && !c)
	return ((char *)&s[i]);
return (NULL);
}
