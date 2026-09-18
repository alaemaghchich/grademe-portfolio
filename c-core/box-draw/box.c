#include <stdlib.h>
#include <unistd.h>
// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
int mini_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i++], 1);
    }
}
int ft_isnum(char *str)
{
    int i = 0;
    while (str[i])
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}
void ft_putchar(char c)
{
	write(1, &c , 1);
}

int	main(int ac , char **av)
{
    if(ac != 3)
    {
       ft_putstr("wrong number of arguments\n");
       return 0;
    }
    if ( ft_isnum(av[1]) == 0 || ft_isnum(av[2]) == 0)
	{
		return 0;
		}
	if(ac == 3)
	 {
		int rows = mini_atoi(av[1]);
		int cols = mini_atoi(av[2]);
        if(rows <= 0 || cols <= 0)
        {
            return 0;
        }
		int i = 0;
        int j;
		while(i < cols)
		{
            j = 0;
            while(j < rows)
            {
                if((i == 0 && j == 0) || (j == rows - 1 && i == 0) || (j == 0 && i == cols - 1) || (j == rows - 1 && i == cols - 1))
                {
                    ft_putchar('+');
                }
                else if((j != 0 && j != rows - 1) && (i == cols - 1 || i == 0))
                {
                    ft_putchar('-');
                }
                else if((j == 0 || j == rows - 1) && !(i == 0 || i == cols - 1))
                {
                    ft_putchar('|');
                }
                else
                {
                    ft_putchar(' ');
                }
                j++;
            }
            ft_putchar('\n');
            i++;
		}
	}
 }
