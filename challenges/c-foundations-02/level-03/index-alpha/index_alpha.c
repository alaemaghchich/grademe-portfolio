#include <unistd.h>

int	main(int argc, char **argv)
{
	int size;
	int i = 0;
	int j;
	if (argc != 2)
		write(1, "wrong number of arguments", 25);
	else
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				size = (argv[1][i] - 'a');
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				size = (argv[1][i] - 'A');
			}
			else{
				size = 1;
			}
			j = 0;
			while(j < size)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
