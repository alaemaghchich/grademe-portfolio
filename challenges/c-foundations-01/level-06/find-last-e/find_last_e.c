#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
	int len;
		len = ft_strlen(argv[1]);
		while(len >= 0)
		{
			if(argv[1][len] == 'e')
			{
				ft_putchar(argv[1][len]);
				ft_putchar('\n');
				return 0;
			}
			len--;
		}
	}
	else
	{
		ft_putchar('e');
	}
	ft_putchar('\n');
	return (0);
}
