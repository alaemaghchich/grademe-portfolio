#include <stddef.h>

void	*gm_memset(void *s, int c, size_t n)
{
	unsigned char *ss;
	size_t i;

	ss = s;
	i = 0;
	while(i < n)
	{
		ss[i++] = c;
	}
	return (s);
}
