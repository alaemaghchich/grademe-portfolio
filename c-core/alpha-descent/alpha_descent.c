
#include <unistd.h>

int	main(void)
{
	char	c;
	int		i;

	c = 'Z';
	i = 0;
	while (c >= 'A')
	{
		if ((i / 2) % 2 == 0)
			write(1, &c, 1);
		else
		{
			char	lower;

			lower = c + 32;
			write(1, &lower, 1);
		}
		c--;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}