#include <unistd.h>
void ft_putnbr(int n)
{
	long nb = n;

	if(nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	char c = (nb % 10) + '0';
	write(1, &c ,1);
}

int	main(int argc, char **argv)
{
	(void)argv;
if (argc > 1)
{
	int count = argc - 1;
	ft_putnbr(count);
	}
else
{
	write(1, "0", 1);
}
write(1, "\n", 1);
}