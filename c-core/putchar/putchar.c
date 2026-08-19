#include <unistd.h>

int	gm_putchar(int c)
{
	char b = (char)c;
	write(1, &b, 1);
	return (b);
}
