#include <stddef.h>

void	*memcpy(void *dst, const void *src, size_t n)
{
	char *d = (char *)dst;
	const char *s = (const char *)src;
	
	size_t i = 0;
	while(n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
