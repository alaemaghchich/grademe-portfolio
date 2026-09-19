#include <unistd.h>
void ft_putchar(char c)
{
	int i = 2;
	while (i > 0)
	{
		write(1, &c , 1);
		i--;
	}
}
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char alpha = 'a';
	while(alpha <= 'z')
	{
        char tmp = alpha;
		if(tmp % 2 == 0)
		{
			ft_putchar(tmp -= 32);
		}
		else
        {
            ft_putchar(tmp);
        }
        alpha++;
	}
	write(1, "\n" , 1);
	return (0);
}
