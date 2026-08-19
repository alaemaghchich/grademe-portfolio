#include <unistd.h>

int	main()
{
	char nb = '9';
	while (nb >= '0')
	{
		write(1, &nb, 1);
		nb--;
	}
	write(1, "\n", 1);
}
