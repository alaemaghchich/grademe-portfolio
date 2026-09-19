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
void ft_putstr(char *c)
{
int i = 0;
while (c[i])
{
    write(1, &c[i++] , 1);
}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
        if (ft_strlen(av[2]) != 1 || ft_strlen(av[3]) != 1)
        {
			ft_putstr("\n");
            return 0;
        }
		int len = ft_strlen(av[1]);
		while(len >= 0 && av[1][len] != av[2][0])
		{
			len--;
		}
		if(len >= 0 && av[1][len] == av[2][0])
			{
                av[1][len] = av[3][0];
			}
        ft_putstr(av[1]);
	}
	else
	{
		ft_putstr("wrong number of arguments");
	}
	ft_putstr("\n");
	return (0);
}
