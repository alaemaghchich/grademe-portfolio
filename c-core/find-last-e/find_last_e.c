#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c ,1);
}

int strlenght(char *str)
{
	int i =0;
	while (str[i])
	{
		i++;
	}
	return i;
}
int	main(int argc, char **argv)
{
	
	if (argc != 2)
	{
		ft_putchar('e');
        ft_putchar('\n');
		return 0;
	}
	else
	{
		int len = strlenght(argv[1]) - 1;

		while(len >= 0){
			if(argv[1][len] == 'e')
			{
				ft_putchar(argv[1][len]);
                ft_putchar('\n');
                return 0;
			}
			len--;

        }
	}

    ft_putchar('\n');
    return 0;
}
