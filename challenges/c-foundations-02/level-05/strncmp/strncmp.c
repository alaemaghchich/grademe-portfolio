#include <stddef.h>

int	gm_strncmp(const char *s1, const char *s2, size_t n)
{
size_t i = 0;
if (n == 0)
	return (0);
while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
{
if (i + 1 == n)
	return (0);
i++;
}
return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
