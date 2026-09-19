#include <unistd.h>
void ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				ft_putchar(av[1][i] , (av[1][i] - 'a'));
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				ft_putchar(av[1][i], (av[1][i] - 'A'));
			}
			else
			{
				ft_putchar(av[1][i], 1);
			}
			i++;
		}
	}
	else
	{
		ft_putstr("wrong number of arguments");
	}
	ft_putstr("\n");
	return (0);
}
